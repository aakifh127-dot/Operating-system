#includestdio.h
#includeunistd.h
int main()
{
    printf(Current process ID(PID) %dn,getpid());
    printf(Parent process ID(PPID) %dn,getppid());
    return 0;
}
