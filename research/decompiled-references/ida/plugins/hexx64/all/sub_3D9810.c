unsigned __int64 __fastcall sub_3D9810(__int64 *a1, __int64 a2, const char *a3, unsigned int **a4, int a5)
{
  size_t v8; // rax
  size_t v9; // r12
  size_t v10; // r14
  _BYTE *v11; // rax
  char *v12; // r9
  unsigned int *v13; // r12
  unsigned int *v14; // r14
  __int64 v15; // r11
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rbx
  __int16 v19; // dx
  __int64 v20; // rbx
  unsigned __int64 v21; // r12
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v25; // [rsp+10h] [rbp-78h]
  __int64 v26; // [rsp+18h] [rbp-70h]
  char *v27; // [rsp+20h] [rbp-68h]
  _BYTE *v29; // [rsp+30h] [rbp-58h] BYREF
  __int128 v30; // [rsp+38h] [rbp-50h]
  unsigned __int64 v31; // [rsp+48h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  if ( !a4[1] )
    return v31 - __readfsqword(0x28u);
  v30 = 0;
  v29 = nullptr;
  v8 = strlen(a3);
  v9 = v8 + 1;
  v10 = v8;
  v11 = (_BYTE *)qvector_reserve((__int64)&v29, 0, v8 + 1, 1);
  *(_QWORD *)&v30 = v9;
  v29 = v11;
  memmove(v11, a3, v10);
  v12 = ": ";
  v29[v10] = 0;
  v13 = *a4;
  v14 = &(*a4)[(_QWORD)a4[1]];
  if ( v14 != *a4 )
  {
    do
    {
      v18 = v30;
      if ( (_QWORD)v30 )
      {
        v15 = v30 + 1;
        v16 = v30 + 2;
        v17 = (__int64)v29;
        v18 = v30 - 1;
        if ( *((_QWORD *)&v30 + 1) < (unsigned __int64)(v30 + 2) )
          goto LABEL_9;
      }
      else
      {
        v17 = (__int64)v29;
        v16 = 3;
        v15 = 2;
        if ( *((_QWORD *)&v30 + 1) < 3u )
        {
LABEL_9:
          v27 = v12;
          v26 = v15;
          v25 = v16;
          v29 = (_BYTE *)qvector_reserve((__int64)&v29, v17, v16, 1);
          v12 = v27;
          v17 = (__int64)v29;
          v15 = v26;
          v16 = v25;
        }
      }
      *(_QWORD *)&v30 = v16;
      v19 = *(_WORD *)v12;
      *(_BYTE *)(v17 + v15) = 0;
      *(_WORD *)&v29[v18] = v19;
      sub_1AF700(a2, (__int64 *)&v29);
      ++v13;
      v12 = ", ";
    }
    while ( v14 != v13 );
  }
  if ( a5 > (int)tag_strlen() && a5 )
    sub_3CFE40(a1, a5);
  v20 = a1[1];
  v21 = 2;
  if ( v20 )
    v21 = v20-- + 1;
  v22 = *a1;
  if ( a1[2] < v21 )
  {
    v23 = qvector_reserve((__int64)a1, v22, v21, 1);
    *a1 = v23;
    v22 = v23;
  }
  a1[1] = v21;
  *(_BYTE *)(v22 + v20) = 32;
  *(_BYTE *)(*a1 + v20 + 1) = 0;
  get_ash();
  sub_FAAD0(a1);
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree((__int64)v29);
  }
  return v31 - __readfsqword(0x28u);
}

