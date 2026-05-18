unsigned __int64 __fastcall sub_F41F0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v8; // rbx
  __int64 *v9; // r13
  bool v10; // cc
  int v11; // r14d
  const char **v12; // rax
  unsigned __int8 *v13; // r12
  const char *v14; // r15
  char v15; // al
  int v16; // eax
  char *v17; // rsi
  __int64 v18; // rax
  __int64 *v19; // rax
  __int64 v20; // [rsp+0h] [rbp-A8h]
  __int64 v21; // [rsp+8h] [rbp-A0h]
  int v22; // [rsp+20h] [rbp-88h]
  _QWORD v24[2]; // [rsp+30h] [rbp-78h] BYREF
  __int128 v25; // [rsp+40h] [rbp-68h]
  __int128 v26; // [rsp+50h] [rbp-58h]
  __int64 v27; // [rsp+60h] [rbp-48h]
  unsigned __int64 v28; // [rsp+68h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v21 = *(_QWORD *)a1;
  if ( !*(_BYTE *)(*(_QWORD *)a1 + 103LL) )
  {
    v5 = *(_QWORD *)(a3 + 32);
    v6 = *(_QWORD *)(a3 + 40);
    v27 = 0;
    v8 = *(_QWORD *)(a2 + 8);
    v9 = (__int64 *)(v5 + 8);
    v10 = *(_WORD *)(a2 + 54) <= 0;
    v24[0] = 0;
    v24[1] = v6;
    v25 = 0;
    v26 = 0;
    if ( !v10 )
    {
      v11 = 0;
      do
      {
        *(_DWORD *)(a2 + 48) |= *(_WORD *)(v8 + 14) & 0x62;
        v13 = (unsigned __int8 *)*v9;
        v14 = sub_D4CC0(v24, *v9);
        v15 = sub_C6820(v13);
        *(_BYTE *)(v8 + 9) = v15;
        if ( v14 )
        {
          v16 = strlen(v14);
          v17 = *(char **)v8;
          v20 = v16 & 0x3FFFFFFF;
          if ( *(_QWORD *)v8 )
          {
            v22 = strlen(v17) & 0x3FFFFFFF;
            v18 = v22;
          }
          else
          {
            v18 = 0;
            v22 = 0;
          }
          v19 = sub_DFFD0(v21, v17, v20 + v18 + 2);
          *(_QWORD *)v8 = v19;
          if ( v19 )
          {
            memcpy((char *)v19 + v22 + 1, v14, v20 + 1);
            *(_WORD *)(v8 + 14) |= 4u;
          }
          else
          {
            *(_WORD *)(v8 + 14) &= 0xFDFBu;
          }
          v15 = *(_BYTE *)(v8 + 9);
        }
        if ( v15 <= 64 )
          *(_BYTE *)(v8 + 9) = a4;
        v12 = (const char **)sub_F3950(a1, v13, 0.0);
        if ( v12 )
          sub_E0BF0(v21, v8, *v12);
        ++v11;
        v8 += 16;
        v9 += 3;
      }
      while ( *(__int16 *)(a2 + 54) > v11 );
    }
    *(_WORD *)(a2 + 60) = 1;
  }
  return __readfsqword(0x28u) ^ v28;
}
