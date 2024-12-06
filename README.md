# course_work_proga
Пример вывода встроенной консольной команды tree:
» tree -a kursovay_tree/                                 

kursovay_tree/
├── .git
│   ├── COMMIT_EDITMSG
│   ├── FETCH_HEAD
│   ├── HEAD
│   ├── ORIG_HEAD
│   ├── config
│   ├── description
│   ├── hooks
│   │   ├── applypatch-msg.sample
│   │   ├── commit-msg.sample
│   │   ├── fsmonitor-watchman.sample
│   │   ├── post-update.sample
│   │   ├── pre-applypatch.sample
│   │   ├── pre-commit.sample
│   │   ├── pre-merge-commit.sample
│   │   ├── pre-push.sample
│   │   ├── pre-rebase.sample
│   │   ├── pre-receive.sample
│   │   ├── prepare-commit-msg.sample
│   │   ├── push-to-checkout.sample
│   │   └── update.sample
│   ├── index
│   ├── info
│   │   └── exclude
│   ├── logs
│   │   ├── HEAD
│   │   └── refs
│   │       ├── heads
│   │       │   └── main
│   │       └── remotes
│   │           └── origin
│   │               └── main
│   ├── objects
│   │   ├── 0b
│   │   │   └── 42386942b276dcd1eb5f283d9a2b856ddef3b4
│   │   ├── 41
│   │   │   └── 6facd104abeda866638e97af6f40dc70cc4e67
│   │   ├── 5a
│   │   │   └── c2f7c75d635b5d6c35379da45b68c69bc11aea
│   │   ├── 76
│   │   │   └── cb32715369c5483b50f873f379b133dad69f12
│   │   ├── 83
│   │   │   └── cf8d3ddff65b06db673788a773c4e64b0353d3
│   │   ├── 88
│   │   │   └── 234d23820c61b7a8eb206f53a08ef986aa28f8
│   │   ├── a1
│   │   │   └── c7a2bb7f795fce65135cdbe53bd6d803a470df
│   │   ├── a8
│   │   │   └── 5685341077dd98add2b45d806879a9945083f1
│   │   ├── c3
│   │   │   └── 8a5a4608eab0611620defb59b5ccd2aac43f3f
│   │   ├── dc
│   │   │   └── 87a8f9d4407fd463de658495fa1b039aa454bc
│   │   ├── info
│   │   └── pack
│   └── refs
│       ├── heads
│       │   └── main
│       ├── remotes
│       │   └── origin
│       │       └── main
│       └── tags
├── README.md
├── a.out
└── code
    └── main.c

28 directories, 39 files

Пример выводы моей программы tree:
» ./a.out 

├── code
  ├── main.c
├── README.md
├── a.out
├── .git
  ├── ORIG_HEAD
  ├── config
  ├── objects
    ├── 0b
      ├── 42386942b276dcd1eb5f283d9a2b856ddef3b4
    ├── 5a
      ├── c2f7c75d635b5d6c35379da45b68c69bc11aea
    ├── pack
    ├── 88
      ├── 234d23820c61b7a8eb206f53a08ef986aa28f8
    ├── info
    ├── dc
      ├── 87a8f9d4407fd463de658495fa1b039aa454bc
    ├── a8
      ├── 5685341077dd98add2b45d806879a9945083f1
    ├── a1
      ├── c7a2bb7f795fce65135cdbe53bd6d803a470df
    ├── c3
      ├── 8a5a4608eab0611620defb59b5ccd2aac43f3f
    ├── 41
      ├── 6facd104abeda866638e97af6f40dc70cc4e67
    ├── 83
      ├── cf8d3ddff65b06db673788a773c4e64b0353d3
    ├── 76
      ├── cb32715369c5483b50f873f379b133dad69f12
  ├── HEAD
  ├── info
    ├── exclude
  ├── logs
    ├── HEAD
    ├── refs
      ├── heads
        ├── main
      ├── remotes
        ├── origin
          ├── main
  ├── description
  ├── hooks
    ├── commit-msg.sample
    ├── pre-rebase.sample
    ├── pre-commit.sample
    ├── applypatch-msg.sample
    ├── fsmonitor-watchman.sample
    ├── pre-receive.sample
    ├── prepare-commit-msg.sample
    ├── post-update.sample
    ├── pre-merge-commit.sample
    ├── pre-applypatch.sample
    ├── pre-push.sample
    ├── update.sample
    ├── push-to-checkout.sample
  ├── refs
    ├── heads
      ├── main
    ├── tags
    ├── remotes
      ├── origin
        ├── main
  ├── index
  ├── COMMIT_EDITMSG
  ├── FETCH_HEAD