__int64 __fastcall sub_FDD80(unsigned __int64 *a1, __int64 *a2, __int64 *a3, int a4)
{
  unsigned __int8 v4; // bp
  __int64 v5; // r12
  __int64 v6; // rax
  _QWORD *v8; // rax
  unsigned __int64 v9; // rsi
  _QWORD *v10; // rcx
  unsigned __int8 v11; // al
  _DWORD *v13; // rax
  _DWORD *v14; // rdx
  _QWORD *v15; // rdx
  _QWORD *i; // rax
  _QWORD *v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  __int64 v20; // [rsp+0h] [rbp-68h] BYREF
  __int128 v21; // [rsp+8h] [rbp-60h]
  __int64 v22; // [rsp+18h] [rbp-50h]
  unsigned __int8 v23; // [rsp+20h] [rbp-48h]
  int v24; // [rsp+28h] [rbp-40h]
  int v25; // [rsp+2Ch] [rbp-3Ch]
  char v26; // [rsp+30h] [rbp-38h]
  unsigned __int64 v27; // [rsp+38h] [rbp-30h]

  v4 = *((_BYTE *)a3 + 8);
  v27 = __readfsqword(0x28u);
  if ( *((_BYTE *)a2 + 8) != v4 )
    sub_FB690();
  v5 = *a3;
  v6 = *a2;
  v20 = 0;
  v22 = v6;
  v23 = v4;
  v24 = v5 - v6;
  v25 = -1;
  v26 = 1;
  v21 = 0;
  v8 = sub_FDAE0(a1, (__int64)&v20);
  v9 = *a1;
  v10 = v8;
  while ( 1 )
  {
LABEL_3:
    if ( (_QWORD *)v9 == v10 )
      return 0;
    v11 = *((_BYTE *)v10 + 56);
    if ( v11 >= v4 && (v4 < v11 || v5 <= v10[6]) )
      return 0;
    v13 = (_DWORD *)v10[3];
    v14 = &v13[v10[4]];
    if ( v13 != v14 )
    {
      while ( *v13 != a4 )
      {
        if ( v14 == ++v13 )
          goto LABEL_13;
      }
      if ( v14 != v13 )
        return 1;
    }
LABEL_13:
    if ( (*v10 & 2) == 0 )
    {
      v15 = (_QWORD *)v10[2];
      if ( (*(_BYTE *)v15 & 2) != 0 )
      {
        v17 = (_QWORD *)(*v10 & 0xFFFFFFFFFFFFFFFCLL);
        v18 = *v17;
        if ( (*v17 & 2) == 0 )
        {
          while ( (_QWORD *)v17[2] == v10 )
          {
            v10 = v17;
            v19 = v18 & 0xFFFFFFFFFFFFFFFCLL;
            v18 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v18 & 2) != 0 )
            {
              v10 = (_QWORD *)v19;
              goto LABEL_3;
            }
            v17 = (_QWORD *)v19;
          }
        }
        v10 = v17;
      }
      else
      {
        for ( i = (_QWORD *)v15[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
          v15 = i;
        v10 = v15;
      }
    }
  }
}

