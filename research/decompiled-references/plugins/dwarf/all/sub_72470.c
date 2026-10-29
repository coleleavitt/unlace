__int64 __fastcall sub_72470(int *src, int *a2, int *a3, int *a4, _DWORD *a5, __int64 a6)
{
  int *v7; // r13
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  signed __int64 v18; // rbx
  signed __int64 v19; // rbp
  int *v20; // r15
  int **v22; // rax
  int *v23; // rsi
  int v24; // eax
  int **v25; // rax
  int v26; // eax
  __int64 *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  int **v30; // rax
  int *v31; // rsi
  int v32; // eax
  __int64 *v33; // rax
  __int64 v34; // rax
  __int64 *v35; // rax
  __int64 v36; // rax
  __int64 v37; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v38[9]; // [rsp+10h] [rbp-48h] BYREF

  v7 = src;
  v38[1] = __readfsqword(0x28u);
  if ( src != a2 )
  {
    while ( a3 != a4 )
    {
      v13 = **(_QWORD **)(a6 + 24);
      v14 = v13 + 80LL * *a3;
      v15 = 80LL * *v7 + v13;
      if ( *(_DWORD *)v14 == 1 )
      {
        v37 = *(_QWORD *)(v14 + 8);
      }
      else
      {
        if ( *(_DWORD *)v14 != 2 )
          goto LABEL_7;
        v22 = *(int ***)(v14 + 8);
        if ( !v22[1] )
          goto LABEL_7;
        v23 = *v22;
        v24 = **v22;
        if ( v24 == 1 )
          goto LABEL_44;
        if ( v24 != 2 )
          goto LABEL_7;
        v25 = *((int ***)v23 + 1);
        if ( !v25[1] )
          goto LABEL_7;
        v23 = *v25;
        v26 = **v25;
        if ( v26 == 1 )
        {
LABEL_44:
          v37 = *((_QWORD *)v23 + 1);
        }
        else
        {
          if ( v26 != 2 )
            goto LABEL_7;
          v27 = *((__int64 **)v23 + 1);
          if ( !v27[1] )
            goto LABEL_7;
          v28 = *v27;
          if ( *(_DWORD *)v28 == 1 )
          {
            v37 = *(_QWORD *)(v28 + 8);
          }
          else
          {
            if ( *(_DWORD *)v28 != 2 )
              goto LABEL_7;
            v29 = *(_QWORD *)(v28 + 8);
            if ( !*(_QWORD *)(v29 + 8) || !(unsigned __int8)sub_6FB30(&v37, *(int **)v29) )
              goto LABEL_7;
          }
        }
      }
      if ( *(_DWORD *)v15 == 1 )
      {
        v16 = *(_QWORD *)(v15 + 8);
        goto LABEL_43;
      }
      if ( *(_DWORD *)v15 == 2 )
      {
        v30 = *(int ***)(v15 + 8);
        if ( v30[1] )
        {
          v31 = *v30;
          v32 = **v30;
          if ( v32 == 1 )
          {
            v16 = *((_QWORD *)v31 + 1);
            goto LABEL_43;
          }
          if ( v32 == 2 )
          {
            v33 = *((__int64 **)v31 + 1);
            if ( v33[1] )
            {
              v34 = *v33;
              if ( *(_DWORD *)v34 == 1 )
                goto LABEL_50;
              if ( *(_DWORD *)v34 == 2 )
              {
                v35 = *(__int64 **)(v34 + 8);
                if ( v35[1] )
                {
                  v34 = *v35;
                  if ( *(_DWORD *)v34 == 1 )
                  {
LABEL_50:
                    v16 = *(_QWORD *)(v34 + 8);
                    goto LABEL_43;
                  }
                  if ( *(_DWORD *)v34 == 2 )
                  {
                    v36 = *(_QWORD *)(v34 + 8);
                    if ( *(_QWORD *)(v36 + 8) )
                    {
                      if ( (unsigned __int8)sub_6FB30(v38, *(int **)v36) )
                      {
                        v16 = v38[0];
LABEL_43:
                        LOBYTE(v16) = v37 < v16;
                        goto LABEL_8;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_7:
      LODWORD(v16) = (unsigned int)compare_arglocs(v14, v15) >> 31;
LABEL_8:
      if ( (_BYTE)v16 )
      {
        v12 = *a3;
        ++a5;
        ++a3;
        *(a5 - 1) = v12;
        if ( v7 == a2 )
          break;
      }
      else
      {
        v17 = *v7++;
        *a5++ = v17;
        if ( v7 == a2 )
          break;
      }
    }
  }
  v18 = (char *)a2 - (char *)v7;
  if ( v18 <= 4 )
  {
    if ( v18 == 4 )
      *a5 = *v7;
  }
  else
  {
    memmove(a5, v7, v18);
  }
  v19 = (char *)a4 - (char *)a3;
  v20 = (_DWORD *)((char *)a5 + v18);
  if ( v19 <= 4 )
  {
    if ( v19 == 4 )
      *v20 = *a3;
  }
  else
  {
    memmove(v20, a3, v19);
  }
  return (__int64)v20 + v19;
}
