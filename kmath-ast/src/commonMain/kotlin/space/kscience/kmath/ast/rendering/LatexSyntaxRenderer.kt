/*
 * Copyright 2018-2021 KMath contributors.
 * Use of this source code is governed by the Apache 2.0 license that can be found in the license/LICENSE.txt file.
 */

package space.kscience.kmath.ast.rendering

import space.kscience.kmath.misc.UnstableKMathAPI

/**
 * [SyntaxRenderer] implementation for LaTeX.
 *
 * The generated string is a valid LaTeX fragment to be used in the Math Mode.
 *
 * Example usage:
 *
 * ```
 * \documentclass{article}
 * \begin{document}
 * \begin{equation}
 * %code generated by the syntax renderer
 * \end{equation}
 * \end{document}
 * ```
 *
 * @author Iaroslav Postovalov
 */
@UnstableKMathAPI
public object LatexSyntaxRenderer : SyntaxRenderer {
    override fun render(node: MathSyntax, output: Appendable): Unit = output.run {
        fun render(syntax: MathSyntax) = render(syntax, output)

        when (node) {
            is NumberSyntax -> append(node.string)
            is SymbolSyntax -> append(node.string)

            is OperatorNameSyntax -> {
                append("\\operatorname{")
                append(node.name)
                append('}')
            }

            is SpecialSymbolSyntax -> when (node.kind) {
                SpecialSymbolSyntax.Kind.INFINITY -> append("\\infty")
                SpecialSymbolSyntax.Kind.SMALL_PI -> append("\\pi")
            }

            is OperandSyntax -> {
                if (node.parentheses) append("\\left(")
                render(node.operand)
                if (node.parentheses) append("\\right)")
            }

            is UnaryOperatorSyntax -> {
                render(node.prefix)
                append("\\,")
                render(node.operand)
            }

            is UnaryPlusSyntax -> {
                append('+')
                render(node.operand)
            }

            is UnaryMinusSyntax -> {
                append('-')
                render(node.operand)
            }

            is RadicalSyntax -> {
                append("\\sqrt")
                append('{')
                render(node.operand)
                append('}')
            }

            is ExponentSyntax -> if (node.useOperatorForm) {
                append("\\operatorname{exp}\\,")
                render(node.operand)
            } else {
                append("e^{")
                render(node.operand)
                append('}')
            }

            is SuperscriptSyntax -> {
                render(node.left)
                append("^{")
                render(node.right)
                append('}')
            }

            is SubscriptSyntax -> {
                render(node.left)
                append("_{")
                render(node.right)
                append('}')
            }

            is BinaryOperatorSyntax -> {
                render(node.prefix)
                append("\\left(")
                render(node.left)
                append(',')
                render(node.right)
                append("\\right)")
            }

            is BinaryPlusSyntax -> {
                render(node.left)
                append('+')
                render(node.right)
            }

            is BinaryMinusSyntax -> {
                render(node.left)
                append('-')
                render(node.right)
            }

            is FractionSyntax -> if (node.infix) {
                render(node.left)
                append('/')
                render(node.right)
            } else {
                append("\\frac{")
                render(node.left)
                append("}{")
                render(node.right)
                append('}')
            }

            is RadicalWithIndexSyntax -> {
                append("\\sqrt")
                append('[')
                render(node.left)
                append(']')
                append('{')
                render(node.right)
                append('}')
            }

            is MultiplicationSyntax -> {
                render(node.left)
                append(if (node.times) "\\times" else "\\,")
                render(node.right)
            }
        }
    }
}
