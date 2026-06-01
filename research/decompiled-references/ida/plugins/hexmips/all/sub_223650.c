__int64 __fastcall sub_223650(__int64 a1, __int64 a2, _QWORD *a3, signed int a4)
{
  __int64 v6; // rbx
  bool v8; // zf
  __int64 v9; // rax
  int v10; // eax
  unsigned int v12; // eax
  __int64 v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rax
  int v16; // edx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rdi
  bool v20; // [rsp+Fh] [rbp-59h]
  __int64 v21; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v22; // [rsp+20h] [rbp-48h] BYREF
  __int64 v23; // [rsp+28h] [rbp-40h]
  unsigned __int64 v24; // [rsp+38h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  if ( a4 == -1 )
    return 1;
  v6 = (__int64)a3;
  if ( a3 && (unsigned __int8)*a3 )
  {
    v12 = *(_DWORD *)(a1 + 72);
    if ( v12 <= 0x10 )
      v12 = getinf();
    if ( v12 != 176 && v12 != 256 && (get_tinfo_property() & 0xF) == 0xB || (v13 = a4, a4 != get_tinfo_size()) )
    {
      if ( !under_debugger )
        sub_37E160(52299);
      goto LABEL_45;
    }
    v22 = -1;
    v8 = *(_BYTE *)(a2 + 8) == 5;
    v23 = 0;
    if ( !v8 )
      goto LABEL_19;
    if ( !(unsigned __int8)sub_219DB0(a1, (__int64)&v22) )
      goto LABEL_19;
    if ( *(_BYTE *)(a2 + 8) != (_BYTE)v23 )
      goto LABEL_19;
    v15 = SHIDWORD(v23);
    if ( !a4 || !HIDWORD(v23) )
      goto LABEL_19;
  }
  else
  {
    v22 = -1;
    v8 = *(_BYTE *)(a2 + 8) == 5;
    v23 = 0;
    if ( !v8
      || !(unsigned __int8)sub_219DB0(a1, (__int64)&v22)
      || (_BYTE)v23 != *(_BYTE *)(a2 + 8)
      || (v13 = a4, v15 = SHIDWORD(v23), !a4)
      || !HIDWORD(v23) )
    {
LABEL_5:
      v9 = *(_QWORD *)(a1 + 1504);
      if ( (*(_BYTE *)(v9 + 50) & 8) != 0 )
        v10 = 16;
      else
        v10 = 2 * *(_DWORD *)(v9 + 80);
      if ( a4 > v10 || !sub_118880(a4) && !sub_118940(a4) )
        return 0;
      v6 = 0;
LABEL_19:
      if ( (unsigned __int8)sub_1EA380(*(_QWORD *)(a1 + 1496), a4, *(_DWORD *)(a1 + 72), v6) )
        return 0;
      if ( *(_BYTE *)(a2 + 8) == 5 )
      {
        v21 = 0;
        if ( !v6 || (copy_tinfo_t(), *(_BYTE *)(a2 + 8) == 5) )
        {
          v14 = *(_QWORD *)a2;
          v20 = v14 == sub_2234B0(a1, *(_QWORD *)a2, &v21, a4);
          clear_tinfo_t();
          return v20;
        }
        if ( !under_debugger )
          sub_37E160(51893);
LABEL_45:
        BUG();
      }
      return 1;
    }
    v6 = 0;
  }
  v16 = v22;
  v17 = *(_QWORD *)a2;
  v18 = v15 + v22 - 1;
  if ( v18 < *(_QWORD *)a2 || (v19 = v13 + v17 - 1, v19 < v22) )
  {
    if ( v6 )
      goto LABEL_19;
    goto LABEL_5;
  }
  LOBYTE(v15) = v17 >= v22;
  LOBYTE(v16) = v18 >= v19;
  return v16 & (unsigned int)v15;
}

