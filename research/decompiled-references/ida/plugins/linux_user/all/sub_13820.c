__int64 sub_13820()
{
  __pid_t v0; // eax
  unsigned int v1; // ebx
  int v2; // eax
  unsigned int v3; // ebp
  int v5; // eax
  const char *v6; // rsi
  const char *v7; // rax
  const char *v8; // rax
  __pid_t v9; // eax
  int v10; // [rsp+8h] [rbp-30h]
  __int64 v11; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  dword_46588 = 0;
  v0 = fork();
  if ( !v0 )
  {
    *__errno_location() = 0;
    if ( ptrace(PTRACE_TRACEME, 0, 0, 0) )
    {
      v8 = (const char *)winerr();
      sub_B0B0((__int64)"PTRACE_O_TRACEFORK test: Cannot trace created process: %s\n", v8);
      _exit(127);
    }
    v9 = getpid();
    kill(v9, 19);
    fork();
    _exit(0);
  }
  v1 = v0;
  if ( v0 == -1 )
  {
    __errno_location();
    v6 = (const char *)winerr();
    return sub_B0B0((__int64)"clone: %s\n", v6);
  }
  else
  {
    v2 = qwait_timed();
    v3 = v2;
    if ( v2 == -1 )
    {
      __errno_location();
      v7 = (const char *)winerr();
      sub_B0B0((__int64)"waitpid: %s\n", v7);
    }
    else if ( v1 == v2 )
    {
      if ( (_BYTE)v10 == 127 )
      {
        if ( !(unsigned int)ptrace(PTRACE_SETOPTIONS, v1, 0, 2) )
        {
          if ( (unsigned int)ptrace(PTRACE_CONT, v3, 0, 0) )
            sub_B0B0((__int64)"linux_test_for_tracefork: failed to resume child");
          v5 = qwait_timed();
          if ( v3 != v5 || v10 >> 16 != 1 )
          {
            sub_B0B0((__int64)"linux_test_for_tracefork: unexpected result from waitpid (%d, status 0x%x)", v5, v10);
            goto LABEL_16;
          }
          v11 = 0;
          if ( (unsigned int)ptrace(PTRACE_GETEVENTMSG, v3, 0, &v11) || !v11 )
            goto LABEL_16;
          dword_46588 = 1;
          qwait_timed();
          if ( (unsigned int)ptrace(PTRACE_KILL, (unsigned int)v11, 0, 0) )
            sub_B0B0((__int64)"linux_test_for_tracefork: failed to kill second child");
          while ( 1 )
          {
            qwait_timed();
LABEL_16:
            if ( (unsigned int)ptrace(PTRACE_KILL, v3, 0, 0) )
              sub_B0B0((__int64)"linux_test_for_tracefork: failed to kill child");
          }
        }
        if ( (unsigned int)ptrace(PTRACE_KILL, v1, 0, 0) )
        {
          sub_B0B0((__int64)"linux_test_for_tracefork: failed to kill child");
        }
        else if ( v1 == (unsigned int)qwait_timed() )
        {
          if ( __OFSUB__((v10 & 0x7F) + 1, 1) || (v10 & 0x7F) == 0 )
            sub_B0B0((__int64)"linux_test_for_tracefork: unexpected wait status 0x%x from killed child", v10);
        }
        else
        {
          sub_B0B0((__int64)"linux_test_for_tracefork: failed to wait for killed child", v1);
        }
      }
      else
      {
        sub_B0B0((__int64)"linux_test_for_tracefork: waitpid: unexpected status %d\b", v10);
      }
    }
    else
    {
      sub_B0B0((__int64)"linux_test_for_tracefork: waitpid: unexpected result %d\n", v2);
    }
    return v12 - __readfsqword(0x28u);
  }
}

