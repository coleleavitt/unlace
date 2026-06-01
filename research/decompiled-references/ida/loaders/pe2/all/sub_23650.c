__int64 __fastcall sub_23650(unsigned __int64 *a1, _DWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rcx
  __int64 v9; // rdx
  unsigned int *v10; // rax
  __int16 v11; // bp
  __int64 v12; // rsi
  unsigned __int64 v13; // rcx
  int v14; // r15d
  unsigned __int64 v15; // rsi
  unsigned int v16; // r8d
  unsigned int *v17; // rbx
  unsigned int v18; // r9d
  unsigned __int64 v19; // rsi
  __int64 v20; // rax
  char v21; // dl
  int v23; // eax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  char v27; // [rsp+0h] [rbp-78h]
  _QWORD v28[14]; // [rsp+8h] [rbp-70h]

  v28[6] = __readfsqword(0x28u);
  *a1 = (unsigned __int64)a2;
  a1[1] = a3;
  if ( *a2 != 1112167234 )
    sub_DB80((__int64)"Expected Metadata Magic signature", (__int64)a2, a3, a4, a5, a6, v27);
  v6 = (unsigned __int64)a2 + a3;
  if ( (_DWORD *)((char *)a2 + a3) < a2 + 4 )
    return 0;
  v9 = (__int64)a2 + ((a2[3] + 3) & 0xFFFFFFFC) + 16;
  if ( v9 + 2 < (unsigned __int64)a2 )
    return 0;
  v10 = (unsigned int *)(v9 + 4);
  if ( v6 < v9 + 4 )
    return 0;
  v11 = *(_WORD *)(v9 + 2);
  if ( v11 )
  {
    v12 = a3;
    v13 = (unsigned __int64)a2;
    v14 = 0;
LABEL_7:
    if ( (unsigned __int64)v10 >= v13 )
    {
      v15 = v13 + v12;
      if ( v15 >= (unsigned __int64)(v10 + 1) )
      {
        v16 = *v10;
        if ( (unsigned __int64)(v10 + 1) >= v13 )
        {
          v17 = v10 + 2;
          if ( v15 >= (unsigned __int64)(v10 + 2) )
          {
            v18 = v10[1];
            v19 = v15 + 1;
            v20 = 1;
            while ( (unsigned __int64)v17 >= v13 )
            {
              v17 = (unsigned int *)((char *)v17 + 1);
              if ( (unsigned int *)v19 == v17 )
                break;
              v21 = *((_BYTE *)v17 - 1);
              *((_BYTE *)v28 + v20 + 7) = v21;
              if ( !v21 )
              {
                *((_BYTE *)&v28[1] + (int)v20) = 0;
LABEL_18:
                v28[0] = a1;
                v23 = sub_22E50(a1, v16, v18);
                a1 = (unsigned __int64 *)v28[0];
                ++v14;
                *(_DWORD *)(v28[0] + 4LL * *(int *)(*(_QWORD *)(v28[0] + 16LL) + 44LL * v23 + 40) + 40) = v23;
                v10 = (unsigned int *)(((unsigned __int64)v17 + 3) & 0xFFFFFFFFFFFFFFFCLL);
                if ( (_WORD)v14 == v11 )
                  goto LABEL_20;
                v13 = *a1;
                v12 = a1[1];
                goto LABEL_7;
              }
              if ( ++v20 == 33 )
                goto LABEL_18;
            }
          }
        }
      }
    }
    return 0;
  }
LABEL_20:
  v24 = a1[3];
  if ( (int)v24 <= 0 )
    return 1;
  v25 = a1[2];
  v26 = v25 + 44LL * (unsigned int)(v24 - 1) + 44;
  while ( *(_DWORD *)(v25 + 40) != 5 )
  {
    v25 += 44LL;
    if ( v26 == v25 )
      return 1;
  }
  if ( v25 )
    return sub_233C0((__int64)a1, (__int64)a2);
  else
    return 1;
}

