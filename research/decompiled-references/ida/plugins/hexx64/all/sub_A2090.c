__int64 __fastcall sub_A2090(__int64 a1, char *a2, __int64 a3, char a4)
{
  bool v4; // zf
  int v6; // r15d
  __int64 v9; // rsi
  int v11; // r14d
  __int64 v12; // r13
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  unsigned __int8 *v16; // r9
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rdx
  unsigned int v20; // ecx
  __int64 v21; // r10
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // rdi
  int v25; // [rsp+0h] [rbp-88h]
  _QWORD *v26; // [rsp+8h] [rbp-80h]
  int v27[4]; // [rsp+10h] [rbp-78h] BYREF
  __int64 v28[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v29; // [rsp+30h] [rbp-58h] BYREF
  __int128 v30; // [rsp+38h] [rbp-50h]
  unsigned __int64 v31; // [rsp+48h] [rbp-40h]

  v4 = *a2 == 10;
  v31 = __readfsqword(0x28u);
  if ( v4 )
  {
    *(_BYTE *)(a1 + 40) = 1;
  }
  else
  {
    v6 = *((_DWORD *)a2 + 1);
    if ( v6 > 1 && (v6 & (v6 - 1)) == 0 )
    {
      v9 = 9;
      v11 = v6 >> 1;
      v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 480LL) + 112LL);
      if ( sub_11CC20(v12, 9u, v6 >> 1) )
      {
        if ( *a2 != 1
          || (v9 = *((unsigned int *)a2 + 2),
              !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 264LL))(v12, v9)) )
        {
          if ( !a4 )
          {
            if ( (v14 = (unsigned __int8)*a2, v15 = (unsigned int)(v14 - 5), (unsigned __int8)(v14 - 5) <= 1u)
              || (_BYTE)v14 == 1
              || (_BYTE)v14 == 14
              && ((v16 = *((unsigned __int8 **)a2 + 1),
                   v17 = *v16,
                   v18 = (unsigned int)(v17 - 5),
                   (unsigned __int8)(v17 - 5) <= 1u)
               || (_BYTE)v17 == 1
               || (_BYTE)v17 == 14
               && (unsigned __int8)sub_A0D90(*((char **)v16 + 1), v9, v18, v13)
               && (unsigned __int8)sub_A0D90((char *)(v21 + 16), v9, v19, v20))
              && (unsigned __int8)sub_A0D90((char *)v16 + 16, v9, v18, v13) )
            {
              sub_123A40((__int64)v27, (unsigned __int8 *)a2, v15, v13);
              if ( (unsigned __int8)sub_127850((unsigned __int64)v27, v12, v11, 0) )
              {
                v24 = *(_QWORD *)(a1 + 16);
                v28[1] = 0;
                v29 = 0;
                v30 = 0;
                sub_127FE0(v24, (__int64)v28, (__int64)v27, 1u, v22, v23, v25, (int)v28, v27[0], v27[2], 0);
                if ( (unsigned __int8)sub_64820(v26, (_QWORD *)(a1 + 48))
                  && (unsigned __int8)sub_317F40((__int64 *)(a1 + 64), (__int64)&v29) )
                {
                  if ( !(unsigned __int8)sub_1272B0((unsigned __int64)a2, v12, v11, 0) )
                  {
                    if ( !under_debugger )
                      sub_383060(0xC77Fu, 0.0);
                    BUG();
                  }
                  sub_1207E0(a2, v12, 9, *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL), v6);
                  ++*(_DWORD *)(a1 + 88);
                }
                if ( v29 )
                {
                  *(_QWORD *)&v30 = 0;
                  qfree(v29);
                }
                qfree(v28[0]);
              }
              sub_11CDA0((__int64)v27);
            }
          }
        }
      }
    }
  }
  return 0;
}

