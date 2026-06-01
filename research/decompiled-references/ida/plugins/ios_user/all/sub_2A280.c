__int64 __fastcall sub_2A280(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        char a6,
        double a7,
        double a8,
        char a9)
{
  unsigned int v11; // r14d
  int (__fastcall *v13)(__int64, __int64 *, __int128 *, double); // rcx
  unsigned __int64 *v14; // rax
  __int64 v17; // [rsp+10h] [rbp-1F8h] BYREF
  __int64 v18; // [rsp+18h] [rbp-1F0h]
  __int64 v19; // [rsp+20h] [rbp-1E8h]
  __int128 v20; // [rsp+60h] [rbp-1A8h] BYREF
  __int64 v21; // [rsp+70h] [rbp-198h]
  __int64 v22; // [rsp+78h] [rbp-190h]
  __int64 v23; // [rsp+80h] [rbp-188h]
  char v24; // [rsp+88h] [rbp-180h] BYREF
  unsigned __int64 v25; // [rsp+1C8h] [rbp-40h] BYREF

  v25 = __readfsqword(0x28u);
  if ( a6 && !(unsigned __int8)sub_5DAE0(*(_QWORD *)(a1 + 864), a3, a4, a5) )
  {
    sub_13170((__int64)"%a: failed to disable breakpoint %a\n", a7, a8);
    return 0;
  }
  if ( (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 8LL))(a1, *(unsigned int *)(a2 + 4)) > 0 )
  {
    v18 = -1;
    v19 = 0;
    v17 = 0xFFFFFFFFLL;
    copy_debug_event();
    if ( a9 )
    {
      v13 = **(int (__fastcall ***)(__int64, __int64 *, __int128 *, double))a1;
      v20 = -1;
      v14 = (unsigned __int64 *)&v24;
      a7 = 0.0;
      v21 = -1;
      v22 = 0;
      v23 = 0;
      do
      {
        *(_WORD *)v14 = 0;
        v14 += 5;
        *((_WORD *)v14 - 19) = 0;
        *((_WORD *)v14 - 18) = 0;
        *((_DWORD *)v14 - 2) = 0;
        *((_WORD *)v14 - 17) = 0;
        *((_OWORD *)v14 - 2) = 0;
        *(v14 - 2) = 0;
      }
      while ( &v25 != v14 );
      if ( v13(a1, &v17, &v20, 0.0) > 0 )
        goto LABEL_5;
    }
    else if ( (int)sub_66900(a1, &v17) > 0 )
    {
LABEL_5:
      v11 = 1;
      *(_QWORD *)(a2 + 8) = v18;
      goto LABEL_6;
    }
    sub_1C950(a1, (__int64)"%a: failed to single step after handling breakpoint %a\n", a7, a8);
    v11 = 0;
LABEL_6:
    if ( (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 16LL))(a1, *(unsigned int *)(a2 + 4)) <= 0 )
    {
      sub_1C950(a1, (__int64)"%a: failed to thaw threads\n", a7);
      v11 = 0;
    }
    free_debug_event();
    if ( !a6 )
      return v11;
    goto LABEL_15;
  }
  v11 = 0;
  sub_1C950(a1, (__int64)"%a: failed to freeze thread %d\n", a7, *(_QWORD *)(a2 + 8));
  if ( !a6 )
    return v11;
LABEL_15:
  if ( !(unsigned __int8)sub_5DAD0(*(_QWORD *)(a1 + 864), a3, a4, a5) )
  {
    sub_1C950(a1, (__int64)"%a: failed to re-enable breakpoint at %a\n", a7, a8);
    return 0;
  }
  return v11;
}

