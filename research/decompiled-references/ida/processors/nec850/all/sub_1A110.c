__int64 __fastcall sub_1A110(__int64 a1, __int64 a2, int a3)
{
  char v4; // al
  char v6; // dl
  unsigned int v7; // eax
  unsigned int v8; // r12d
  __int64 v9; // rax
  unsigned __int64 i; // r14
  __int64 v11; // rsi
  _BOOL8 v12; // rcx
  char v13; // dl
  __int64 v14; // rdx
  __int64 v16; // [rsp+0h] [rbp-58h] BYREF
  __int64 v17; // [rsp+8h] [rbp-50h]
  __int64 v18; // [rsp+10h] [rbp-48h]
  unsigned __int64 v19; // [rsp+18h] [rbp-40h]

  v4 = *(_BYTE *)(a2 + 88);
  v19 = __readfsqword(0x28u);
  v6 = v4;
  v7 = v4 & 0xF0;
  if ( (v6 & 0xF0) == 0xC0 )
    v7 = *(_DWORD *)(a2 + 28);
  if ( v7 <= 0x10 )
    getinf(99);
  v8 = sub_1A000(a1, (_DWORD *)(a2 + 40), (__int64 *)(a2 + 32));
  if ( (_BYTE)v8 )
  {
    v9 = *(_QWORD *)(a2 + 8);
    v16 = 0;
    v18 = a1;
    if ( v9 )
    {
      v9 = 0;
      for ( i = 0; i < *(_QWORD *)(a2 + 8); ++i )
      {
        v14 = *(_QWORD *)a2 + 80 * i;
        if ( a3 > 0 )
        {
          if ( i < a3 )
            goto LABEL_14;
        }
        else if ( a3 )
        {
LABEL_14:
          v12 = 0;
          v11 = 0;
          goto LABEL_10;
        }
        v11 = *(_QWORD *)a2 + 80 * i;
        v12 = a3 > 0;
LABEL_10:
        v17 = v9;
        v13 = sub_19D60(&v16, v11, v14 + 64, v12);
        v9 = v17;
        if ( !v13 )
          return 0;
      }
    }
    *(_QWORD *)(a2 + 56) = v9;
  }
  else
  {
    return 0;
  }
  return v8;
}

