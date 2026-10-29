__int64 __fastcall sub_F8AC0(__int64 **a1, __int64 a2, int *a3, const char *a4, double a5)
{
  int v6; // ebx
  int *i; // r14
  __int64 v8; // r13
  int v9; // eax
  __int64 j; // r15
  int v11; // eax
  int *v13; // rax
  int v14; // ebx
  __int64 *v16; // [rsp+10h] [rbp-A8h]
  unsigned int v17; // [rsp+28h] [rbp-90h]
  int v18; // [rsp+2Ch] [rbp-8Ch]
  int v19; // [rsp+3Ch] [rbp-7Ch] BYREF
  _QWORD v20[2]; // [rsp+40h] [rbp-78h] BYREF
  __int128 v21; // [rsp+50h] [rbp-68h]
  __int64 v22; // [rsp+60h] [rbp-58h]
  __int64 v23; // [rsp+68h] [rbp-50h]
  unsigned __int64 v24; // [rsp+78h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v17 = **(_DWORD **)(a2 + 32);
  v16 = *a1;
  if ( *a3 <= 0 )
    return sub_E4400(v16, (unsigned int **)(a2 + 32), a3, a4);
  v6 = 0;
  for ( i = a3 + 2; ; i += 6 )
  {
    v8 = *(_QWORD *)i;
    if ( *(_QWORD *)i )
      break;
LABEL_17:
    if ( *a3 <= ++v6 )
      return sub_E4400(v16, (unsigned int **)(a2 + 32), a3, a4);
  }
  v9 = *(_DWORD *)(v8 + 4);
  for ( j = *(_QWORD *)i; (v9 & 0x41000) != 0; v9 = *(_DWORD *)(j + 4) )
  {
    j = (v9 & 0x40000) != 0 ? *(_QWORD *)(*(_QWORD *)(j + 32) + 8LL) : *(_QWORD *)(j + 16);
    if ( !j )
      goto LABEL_17;
  }
  if ( *a4 != 71 )
  {
    if ( *(_BYTE *)j == 59 )
    {
      v11 = sub_CE4C0(*(int **)(a2 + 32), (unsigned __int8 **)(j + 8));
      v19 = v11;
      if ( v11 > 0 )
      {
LABEL_16:
        *((_WORD *)i + 10) = v11;
        goto LABEL_17;
      }
    }
    else
    {
      v19 = 0;
    }
  }
  if ( (unsigned int)sub_CE930(j, &v19) )
  {
    LOWORD(v11) = v19;
    if ( (unsigned int)(v19 - 1) > 0xFFFE )
    {
      sub_E43A0((__int64)v16, (__int64)a4, (unsigned int)(v6 + 1), v17, j);
      return 1;
    }
    goto LABEL_16;
  }
  *((_WORD *)i + 10) = 0;
  if ( !sub_E45E0((__int64)a1, v8) )
  {
    v13 = *(int **)(a2 + 32);
    if ( *v13 > 0 )
    {
      v18 = v6;
      v14 = 0;
      do
      {
        while ( (unsigned int)sub_F80F0(0, (char *)v8, *(_QWORD *)&v13[6 * v14 + 2], 0xFFFFFFFF, a5) )
        {
          v13 = *(int **)(a2 + 32);
          if ( *v13 <= ++v14 )
            goto LABEL_30;
        }
        if ( *(_QWORD *)(a2 + 112) )
        {
          a5 = 0.0;
          v22 = 0;
          v20[0] = 0;
          v20[1] = sub_D0F00;
          v21 = 0;
          v23 = a2;
          sub_CDCD0((__int64)v20, v8);
        }
        *((_WORD *)i + 10) = ++v14;
        v13 = *(int **)(a2 + 32);
      }
      while ( *v13 > v14 );
LABEL_30:
      v6 = v18;
    }
    goto LABEL_17;
  }
  return 1;
}
