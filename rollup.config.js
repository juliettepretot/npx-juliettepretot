import bucklescript from 'rollup-plugin-bucklescript'

export default {
  input: 'src/Index.re',
  output: {
    file: 'dist/index.bs.js',
    format: 'cjs',
    banner: '#!/usr/bin/env node'
  },
  plugins: [bucklescript()]
}
