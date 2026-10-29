unsigned __int64 __fastcall sub_195BA0(__int64 a1, __int64 a2, __int64 *a3, int a4, char a5, double a6)
{
  __int64 v9; // r15
  _DWORD *v10; // rsi
  int tinfo_size; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v18; // r12
  int v19; // r13d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r14
  _QWORD *v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v26; // [rsp+10h] [rbp-68h] BYREF
  _QWORD *v27; // [rsp+18h] [rbp-60h]
  _DWORD v28[6]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v29; // [rsp+38h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  v9 = *(_QWORD *)(a2 + 1496);
  v26 = 0xFFFFFFFF00000000LL;
  v27 = nullptr;
  v10 = *(_DWORD **)(v9 + 248);
  tinfo_size = get_tinfo_size();
  v13 = *((unsigned __int8 *)a3 + 8);
  if ( a4 == -1 )
  {
    if ( (_BYTE)v13 == 1 )
    {
      v24 = *a3;
      v28[0] = 1;
      v10 = v28;
      v28[1] = tinfo_size;
      v28[2] = v24;
      sub_125180((unsigned __int8 *)&v26, (unsigned __int8 *)v28);
      sub_11CDA0((__int64)v28);
    }
    else
    {
      if ( (_BYTE)v13 != 5 )
        sub_195120(a6);
      LOBYTE(v26) = 5;
      v22 = *a3;
      v23 = (_QWORD *)j__qalloc_or_throw(16, (__int64)v10, v13, v12);
      *v23 = a2;
      v23[1] = v22;
      v27 = v23;
    }
  }
  else
  {
    if ( (_BYTE)v13 )
    {
      if ( !under_debugger )
        sub_383060(0xC98Au, a6);
      BUG();
    }
    LOBYTE(v26) = 9;
    v14 = j__qalloc_or_throw(24, (__int64)v10, v13, v12);
    *(_QWORD *)v14 = a2;
    *(_QWORD *)(v14 + 8) = 0;
    *(_DWORD *)(v14 + 16) = a4;
    v27 = (_QWORD *)v14;
  }
  if ( a5 )
  {
    *(_BYTE *)a1 = 10;
    v18 = j__qalloc_or_throw(24, (__int64)v10, v15, v16);
    v19 = -(*((_BYTE *)a3 + 8) != 1);
    sub_123A40(v18, (unsigned __int8 *)&v26, v20, v21);
    *(_DWORD *)(v18 + 16) = v19;
    *(_DWORD *)(v18 + 20) = -1;
    *(_QWORD *)(a1 + 8) = v18;
  }
  else
  {
    sub_11CA10((char *)a1, (char *)&v26);
  }
  sub_1959F0(v9, a1);
  sub_11CDA0((__int64)&v26);
  return v29 - __readfsqword(0x28u);
}

