import os

env = Environment()
env['CC'] = "dmc"
env['ENV']['INCLUDE'] = ""
env['ENV']['PATH'] = ['E:/fondon/dmc/bin']

env['BUILDERS']['CC'] = Builder(action='dmc -c -I./include -I../../dmc/stlport/stlport -v1 $SOURCE')
env['BUILDERS']['LINK'] = Builder(action='link $SOURCE,,,advapi32+lib\\pdcurses/NOIGNORECASE /DETAILEDMAP /INFORMATION')

src = ARGUMENTS.get('src')

if src is not None:
  print("src=%s" % src)
  env.Alias('build', [env.CC(f'{src}.obj', f'{src}.cpp'), env.LINK(f'{src}.exe', f'{src}.obj')])

if env.GetOption('clean'):
  dir_name = "."
  files = os.listdir(dir_name)
  for item in files:
      if item.endswith(".exe") or item.endswith(".obj") or item.endswith(".map"):
          os.remove(os.path.join(dir_name, item))
