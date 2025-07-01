import glob

for path in glob.glob('*.txt'):
    try:
        with open(path, encoding='utf-8') as f:
            data = f.read(100)
        print(f'{path}: {len(data)} chars read')
    except Exception as e:
        print(f'Error reading {path}: {e}')
