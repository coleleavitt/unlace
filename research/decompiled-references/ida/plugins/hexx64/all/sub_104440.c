__int64 __fastcall sub_104440(unsigned __int64 *a1, __int64 *a2, __int64 *a3, int a4, double a5)
{
  unsigned __int8 v5; // bp
  __int64 v6; // r12
  __int64 v7; // rax
  _QWORD *v9; // rax
  unsigned __int64 v10; // rsi
  _QWORD *v11; // rcx
  unsigned __int8 v12; // al
  _DWORD *v14; // rax
  _DWORD *v15; // rdx
  _QWORD *v16; // rdx
  _QWORD *i; // rax
  _QWORD *v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // rdi
  __int64 v21; // [rsp+0h] [rbp-68h] BYREF
  __int128 v22; // [rsp+8h] [rbp-60h]
  __int64 v23; // [rsp+18h] [rbp-50h]
  unsigned __int8 v24; // [rsp+20h] [rbp-48h]
  int v25; // [rsp+28h] [rbp-40h]
  int v26; // [rsp+2Ch] [rbp-3Ch]
  char v27; // [rsp+30h] [rbp-38h]
  unsigned __int64 v28; // [rsp+38h] [rbp-30h]

  v5 = *((_BYTE *)a3 + 8);
  v28 = __readfsqword(0x28u);
  if ( *((_BYTE *)a2 + 8) != v5 )
    sub_101D50(a5);
  v6 = *a3;
  v7 = *a2;
  v21 = 0;
  v23 = v7;
  v24 = v5;
  v25 = v6 - v7;
  v26 = -1;
  v27 = 1;
  v22 = 0;
  v9 = sub_1041A0(a1, (__int64)&v21);
  v10 = *a1;
  v11 = v9;
  while ( 1 )
  {
LABEL_3:
    if ( (_QWORD *)v10 == v11 )
      return 0;
    v12 = *((_BYTE *)v11 + 56);
    if ( v12 >= v5 && (v5 < v12 || v6 <= v11[6]) )
      return 0;
    v14 = (_DWORD *)v11[3];
    v15 = &v14[v11[4]];
    if ( v14 != v15 )
    {
      while ( *v14 != a4 )
      {
        if ( v15 == ++v14 )
          goto LABEL_13;
      }
      if ( v15 != v14 )
        return 1;
    }
LABEL_13:
    if ( (*v11 & 2) == 0 )
    {
      v16 = (_QWORD *)v11[2];
      if ( (*(_BYTE *)v16 & 2) != 0 )
      {
        v18 = (_QWORD *)(*v11 & 0xFFFFFFFFFFFFFFFCLL);
        v19 = *v18;
        if ( (*v18 & 2) == 0 )
        {
          while ( (_QWORD *)v18[2] == v11 )
          {
            v11 = v18;
            v20 = v19 & 0xFFFFFFFFFFFFFFFCLL;
            v19 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v19 & 2) != 0 )
            {
              v11 = (_QWORD *)v20;
              goto LABEL_3;
            }
            v18 = (_QWORD *)v20;
          }
        }
        v11 = v18;
      }
      else
      {
        for ( i = (_QWORD *)v16[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
          v16 = i;
        v11 = v16;
      }
    }
  }
}

