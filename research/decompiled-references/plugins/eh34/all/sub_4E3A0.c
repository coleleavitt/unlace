unsigned __int64 __fastcall sub_4E3A0(_DWORD *a1, double a2)
{
  int v2; // eax
  __int64 v3; // rbp
  __int64 v4; // rsi
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // rbp
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // r13
  __int64 v12; // rsi
  __int64 v13; // rbx
  unsigned __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v17; // [rsp+0h] [rbp-48h] BYREF
  __int64 v18; // [rsp+8h] [rbp-40h]
  unsigned __int64 v19; // [rsp+10h] [rbp-38h]
  unsigned __int64 v20; // [rsp+18h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  sub_4E1F0((__int64)&v17, (__int64)a1);
  v2 = a1[8];
  if ( v2 )
  {
    if ( v2 != 1 )
    {
      v3 = v18;
      if ( v18 )
      {
        v6 = v18 + 5;
        v5 = v18 + 6;
        v4 = v17;
        v3 = v18 - 1;
        if ( v19 >= v18 + 6 )
          goto LABEL_5;
      }
      else
      {
        v4 = v17;
        v5 = 7;
        v6 = 6;
        if ( v19 >= 7 )
        {
LABEL_5:
          v18 = v5;
          *(_BYTE *)(v4 + v6) = 0;
          v7 = v17 + v3;
          *(_DWORD *)v7 = 1668641568;
          *(_WORD *)(v7 + 4) = 10339;
          goto LABEL_6;
        }
      }
      v17 = qvector_reserve(&v17, v4, v5, 1);
      v4 = v17;
      goto LABEL_5;
    }
    sub_10400(&v17, (__int64)"%s%a", " succ(", a2);
  }
  else
  {
    sub_10400(&v17, (__int64)"%s@%d", " succ(", a1[6]);
  }
LABEL_6:
  v8 = a1[12];
  if ( v8 )
  {
    if ( v8 != 1 )
    {
      v9 = v18;
      if ( v18 )
      {
        v10 = v18 + 1;
        v11 = v18;
        v12 = v17;
        v9 = v18 - 1;
        if ( v19 >= v18 + 1 )
        {
LABEL_10:
          v18 = v10;
          *(_BYTE *)(v12 + v11) = 0;
          *(_BYTE *)(v17 + v9) = 44;
          goto LABEL_11;
        }
      }
      else
      {
        v12 = v17;
        v10 = 2;
        v11 = 1;
        if ( v19 >= 2 )
          goto LABEL_10;
      }
      v17 = qvector_reserve(&v17, v12, v10, 1);
      v12 = v17;
      goto LABEL_10;
    }
    sub_10400(&v17, (__int64)"%s%a", ",", a2);
  }
  else
  {
    sub_10400(&v17, (__int64)"%s@%d", ",", a1[10]);
  }
LABEL_11:
  v13 = v18;
  v14 = 2;
  if ( v18 )
  {
    v14 = v18 + 1;
    v13 = v18 - 1;
  }
  v15 = v17;
  if ( v19 < v14 )
  {
    v17 = qvector_reserve(&v17, v17, v14, 1);
    v15 = v17;
  }
  *(_BYTE *)(v15 + v13) = 41;
  *(_BYTE *)(v17 + v13 + 1) = 0;
  if ( v17 )
  {
    v18 = 0;
    qfree(v17);
  }
  return v20 - __readfsqword(0x28u);
}
