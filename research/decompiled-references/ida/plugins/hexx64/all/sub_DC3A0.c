__int64 __fastcall sub_DC3A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int8 a5, double a6)
{
  unsigned __int64 v6; // r14
  __int64 v9; // rax
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rax
  unsigned int v13; // r11d
  __int64 v14; // rax
  unsigned __int64 v15; // rbp
  __int64 v16; // r13
  char v17; // al
  __int64 v19; // r13
  _BYTE *v20; // rax
  int v21; // eax
  int i; // r15d
  __int64 v23; // rax
  unsigned int v24; // [rsp+8h] [rbp-E0h]
  __int64 v26[2]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v27; // [rsp+60h] [rbp-88h]
  __int64 v28; // [rsp+68h] [rbp-80h]
  __int64 v29[2]; // [rsp+80h] [rbp-68h] BYREF
  __int64 v30; // [rsp+90h] [rbp-58h]
  __int64 v31; // [rsp+98h] [rbp-50h]
  unsigned __int64 v32; // [rsp+A8h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  if ( !a3 )
  {
    if ( !under_debugger )
      sub_383060(0xCA2Du, a6);
LABEL_45:
    BUG();
  }
  if ( a4 && !sub_122240(a3, *(_QWORD *)(a4 + 8), 0) )
  {
    if ( !under_debugger )
      sub_383060(0xCA63u, a6);
    goto LABEL_45;
  }
  sub_124680((__int64)v26, a2, a3, 1u);
  if ( sub_64930(v26, *(_DWORD *)(a1 + 132)) )
  {
    *(_QWORD *)(a1 + 104) = a3;
  }
  else if ( a3 == a4 )
  {
    *(_QWORD *)(a1 + 104) = 0;
  }
  else
  {
    v9 = sub_124B60(a2, *(_DWORD *)(a1 + 132), a3, a4, 0, 1u);
    *(_QWORD *)(a1 + 104) = v9;
    if ( !v9 )
    {
      v19 = a3;
      do
      {
        if ( !a4 )
        {
          sub_127A20((__int64)v29, a2, v19, 1, v10, v11);
          LOBYTE(v21) = sub_64930(v29, *(_DWORD *)(a1 + 132));
          LODWORD(v6) = v21;
          if ( v30 )
          {
            v31 = 0;
            qfree(v30);
          }
          qfree(v29[0]);
          if ( (_BYTE)v6 )
            break;
        }
        v20 = sub_120380((_BYTE *)v19, 1);
        if ( v20 )
        {
          if ( v20[64] == 8 )
          {
            v6 = *((_QWORD *)v20 + 9);
            for ( i = 0; (unsigned __int64)i < *(_QWORD *)(v6 + 32); ++i )
            {
              if ( *(_QWORD *)(a1 + 104) )
                break;
              if ( (unsigned int)for_all_arglocs() )
                *(_QWORD *)(a1 + 104) = v19;
            }
          }
        }
        v19 = *(_QWORD *)(v19 + 16);
        if ( a4 == v19 )
          break;
      }
      while ( !*(_QWORD *)(a1 + 104) );
    }
  }
  if ( !a5 )
    goto LABEL_12;
  v12 = *(_QWORD *)(a1 + 32);
  v13 = *(_DWORD *)(a1 + 128);
  v6 = *(_QWORD *)(v12 + 32);
  v14 = *(_QWORD *)(v12 + 480);
  v15 = *(_QWORD *)(a3 + 24) + 1LL;
  v16 = *(_QWORD *)(v14 + 112);
  if ( *(char *)(*(_QWORD *)(v14 + 8) + 10LL) >= 0
    || (v24 = *(_DWORD *)(a1 + 128), LOBYTE(v29[0]) = 1, v23 = sub_CFF70(), v13 = v24, v23 != 1)
    || v15 == -1
    || (v17 = sub_32E840(v29, v16, v24, v15, v15 + 1, 1), v13 = v24, !v17) )
  {
    v17 = sub_32E840(v29, v16, v13, v6, v15, 1);
  }
  if ( (v17 & 2) == 0 )
  {
    *(_QWORD *)(a1 + 112) = -1;
LABEL_12:
    LOBYTE(v6) = *(_QWORD *)(a1 + 104) != 0;
    goto LABEL_13;
  }
  LODWORD(v6) = a5;
  *(_QWORD *)(a1 + 112) = v29[0];
  if ( v17 != 2 )
    goto LABEL_12;
LABEL_13:
  if ( v27 )
  {
    v28 = 0;
    qfree(v27);
  }
  qfree(v26[0]);
  return (unsigned int)v6;
}

