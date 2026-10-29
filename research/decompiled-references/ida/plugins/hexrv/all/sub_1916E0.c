unsigned __int64 __fastcall sub_1916E0(__int64 a1, __int64 a2, __int64 *a3, int a4, char a5)
{
  __int64 v8; // r15
  __int64 v9; // rsi
  int tinfo_size; // eax
  char v11; // dl
  __int64 v12; // rax
  __int64 v14; // r12
  int v15; // r13d
  __int64 v16; // r14
  _QWORD *v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v20; // [rsp+10h] [rbp-68h] BYREF
  _QWORD *v21; // [rsp+18h] [rbp-60h]
  _DWORD v22[6]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(a2 + 1496);
  v20 = 0xFFFFFFFF00000000LL;
  v21 = nullptr;
  v9 = *(_QWORD *)(v8 + 248);
  tinfo_size = get_tinfo_size();
  v11 = *((_BYTE *)a3 + 8);
  if ( a4 == -1 )
  {
    if ( v11 == 1 )
    {
      v18 = *a3;
      v22[0] = 1;
      v22[1] = tinfo_size;
      v22[2] = v18;
      sub_120CC0((__int64)&v20, (unsigned __int8 *)v22);
      sub_1188E0((__int64)v22);
    }
    else
    {
      if ( v11 != 5 )
        sub_190C60(0, v9);
      LOBYTE(v20) = 5;
      v16 = *a3;
      v17 = (_QWORD *)j__qalloc_or_throw();
      *v17 = a2;
      v17[1] = v16;
      v21 = v17;
    }
  }
  else
  {
    if ( v11 )
    {
      if ( !under_debugger )
        sub_37DDE0(51594);
      BUG();
    }
    LOBYTE(v20) = 9;
    v12 = j__qalloc_or_throw();
    *(_QWORD *)v12 = a2;
    *(_QWORD *)(v12 + 8) = 0;
    *(_DWORD *)(v12 + 16) = a4;
    v21 = (_QWORD *)v12;
  }
  if ( a5 )
  {
    *(_BYTE *)a1 = 10;
    v14 = j__qalloc_or_throw();
    v15 = -(*((_BYTE *)a3 + 8) != 1);
    sub_11F580(v14, (unsigned __int8 *)&v20);
    *(_DWORD *)(v14 + 16) = v15;
    *(_DWORD *)(v14 + 20) = -1;
    *(_QWORD *)(a1 + 8) = v14;
  }
  else
  {
    sub_118550((char *)a1, (char *)&v20);
  }
  sub_191530(v8, a1);
  sub_1188E0((__int64)&v20);
  return v23 - __readfsqword(0x28u);
}

