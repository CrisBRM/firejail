# HOME directory
blacklist ${HOME}/.ssh
tmpfs ${HOME}/.gnome2_private
blacklist ${HOME}/.gnome2/keyrings
blacklist ${HOME}/kde4/share/apps/kwallet
blacklist ${HOME}/kde/share/apps/kwallet
blacklist ${HOME}/.netrc
blacklist ${HOME}/.gnupg
blacklist-nolog ${HOME}/.local/share/recently-used.xbel*
blacklist ${HOME}/*.kdbx
blacklist ${HOME}/*.kdb
blacklist ${HOME}/*.key
blacklist /etc/shadow
blacklist /etc/gshadow
blacklist /etc/passwd-
blacklist /etc/group-
blacklist /etc/shadow-
blacklist /etc/gshadow-
blacklist /etc/passwd+
blacklist /etc/group+
blacklist /etc/shadow+
blacklist /etc/gshadow+
blacklist /etc/ssh
blacklist /var/backup
