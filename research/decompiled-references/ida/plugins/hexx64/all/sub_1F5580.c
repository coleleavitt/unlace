__int64 __fastcall sub_1F5580(__int64 a1, int *a2, int a3, double a4, __m128 a5)
{
  bool v7; // zf
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rbx
  int v11; // ebp
  unsigned int v12; // r12d
  __int64 v13; // rax
  __int64 v14; // r15
  char v15; // r10
  int v16; // edx
  int v17; // eax
  int v18; // eax
  signed __int64 v19; // rax
  int v20; // ecx
  int *v21; // r15
  int v22; // ecx
  char v23; // si
  int *v24; // rax
  int v25; // edx
  _QWORD **v26; // rbx
  void *v27; // rdi
  __int64 v29; // rdx
  int v30; // ebp
  __int64 v31; // rax
  unsigned __int64 v32; // [rsp+8h] [rbp-F0h]
  char v33; // [rsp+1Bh] [rbp-DDh]
  char v35; // [rsp+20h] [rbp-D8h] BYREF
  int v36; // [rsp+28h] [rbp-D0h] BYREF
  void *v37; // [rsp+30h] [rbp-C8h]
  int *v38; // [rsp+38h] [rbp-C0h]
  int *v39; // [rsp+40h] [rbp-B8h]
  __int64 v40; // [rsp+48h] [rbp-B0h]
  _QWORD v41[5]; // [rsp+50h] [rbp-A8h] BYREF
  char v42; // [rsp+78h] [rbp-80h]
  __int64 v43; // [rsp+80h] [rbp-78h] BYREF
  __int128 v44; // [rsp+88h] [rbp-70h]
  char *v45; // [rsp+98h] [rbp-60h]
  __int64 v46; // [rsp+A0h] [rbp-58h]
  int v47; // [rsp+A8h] [rbp-50h]
  int v48; // [rsp+ACh] [rbp-4Ch]
  unsigned __int64 v49; // [rsp+B8h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a1 + 440) == 0;
  v36 = 0;
  v38 = &v36;
  v39 = &v36;
  v8 = *a2;
  v37 = nullptr;
  v40 = 0;
  v9 = v8;
  v10 = *(_QWORD *)(a1 + 432) + 104 * v8;
  if ( v7 )
    return 0;
  v33 = 0;
  v11 = 0;
  v32 = a3;
  v12 = 0;
  v13 = 0;
  do
  {
    if ( v9 != v11 )
    {
      v14 = *(_QWORD *)(a1 + 432) + 104 * v13;
      if ( !*(_DWORD *)(v14 + 92) )
      {
        v15 = sub_1C4AE0((int *)v14, *(int *)(v14 + 88), (int *)v10, v32, a4);
        if ( v15 )
        {
          if ( !*(_QWORD *)(a1 + 800) )
            goto LABEL_19;
          v16 = *(_DWORD *)v10;
          if ( ((*(_DWORD *)v10 - 2) & 0xFFFFFFFD) == 0
            || (v17 = *(_DWORD *)v14, ((*(_DWORD *)v14 - 2) & 0xFFFFFFFD) == 0) )
          {
LABEL_41:
            v12 = -20;
            goto LABEL_32;
          }
          if ( v17 == 5 )
          {
            v18 = **(_DWORD **)(v14 + 8);
            goto LABEL_14;
          }
          if ( v17 > 5 )
          {
            if ( v17 != 6 )
              goto LABEL_46;
          }
          else if ( v17 != 1 )
          {
            if ( v17 == 3 )
            {
              v18 = *(unsigned __int16 *)(v14 + 8);
LABEL_14:
              v19 = (unsigned int)(*(_DWORD *)(v14 + 88) + v18);
              if ( *(_DWORD *)(a1 + 792) > v11 )
              {
                v20 = *(_DWORD *)(v14 + 24);
                if ( (v20 & 0x100) != 0 )
                {
                  if ( *(_BYTE *)(a1 + 320) || (v20 & 0x8000) != 0 )
                    goto LABEL_41;
                  v33 = v15;
LABEL_19:
                  v21 = (int *)v37;
                  if ( v37 )
                  {
                    while ( 1 )
                    {
                      v22 = v21[8];
                      v23 = 0;
                      v24 = *((int **)v21 + 3);
                      if ( v22 > v11 )
                      {
                        v24 = *((int **)v21 + 2);
                        v23 = v15;
                      }
                      if ( !v24 )
                        break;
                      v21 = v24;
                    }
                    if ( !v23 )
                    {
LABEL_26:
                      if ( v22 >= v11 )
                      {
LABEL_28:
                        v9 = *a2;
                        v12 += *a2 > v11;
                        goto LABEL_29;
                      }
LABEL_27:
                      *(_DWORD *)(operator new(0x28u) + 32) = v11;
                      std::_Rb_tree_insert_and_rebalance();
                      ++v40;
                      goto LABEL_28;
                    }
                    if ( v21 == v38 )
                      goto LABEL_27;
                  }
                  else if ( v38 == &v36 )
                  {
                    goto LABEL_27;
                  }
                  v22 = *(_DWORD *)(std::_Rb_tree_decrement() + 32);
                  goto LABEL_26;
                }
              }
              if ( v16 == 5 )
              {
                v29 = **(_QWORD **)(v10 + 8);
              }
              else
              {
                if ( v16 > 5 )
                {
                  if ( v16 != 6 )
                  {
LABEL_50:
                    v29 = -1;
                    goto LABEL_40;
                  }
                }
                else if ( v16 != 1 )
                {
                  if ( v16 == 3 )
                  {
                    v29 = *(unsigned __int16 *)(v10 + 8);
                    goto LABEL_40;
                  }
                  goto LABEL_50;
                }
                v29 = *(_QWORD *)(v10 + 8);
              }
LABEL_40:
              if ( v19 > (__int64)(v32 + v29) )
                goto LABEL_41;
              goto LABEL_19;
            }
LABEL_46:
            v18 = -1;
            goto LABEL_14;
          }
          v18 = *(_DWORD *)(v14 + 8);
          goto LABEL_14;
        }
        v9 = *a2;
      }
    }
LABEL_29:
    v13 = ++v11;
  }
  while ( (unsigned __int64)v11 < *(_QWORD *)(a1 + 440) );
  v25 = v9 - v12;
  v7 = v40 == 0;
  *a2 = v25;
  if ( v7 )
    goto LABEL_31;
  a4 = 0.0;
  v45 = &v35;
  memset(&v41[1], 0, 32);
  v42 = 0;
  v41[0] = &off_4DEB68;
  v43 = 0;
  v46 = v10;
  v47 = a3;
  v48 = v25;
  v44 = 0;
  v30 = sub_11FBB0(a1, (__int64)v41);
  if ( v30 )
    goto LABEL_56;
  sub_1559D0((__int64)&v43, 0, 0.0);
  if ( *(_DWORD *)v10 == 1 )
    sub_230980((const double *)(a1 + 816), *(_QWORD *)(v10 + 8), a3);
  if ( v38 != &v36 )
  {
    do
    {
      v31 = std::_Rb_tree_decrement();
      sub_1F5300(a1, *(_DWORD *)(v31 + 32), 0.0, a5);
    }
    while ( (int *)std::_Rb_tree_decrement() != v38 );
  }
  v30 = -36;
  if ( v33 )
  {
LABEL_56:
    v41[0] = &off_4DEB68;
    sub_1559D0((__int64)&v43, 1, 0.0);
    if ( v43 )
    {
      *(_QWORD *)&v44 = 0;
      qfree(v43);
    }
    v12 = v30;
  }
  else
  {
    v41[0] = &off_4DEB68;
    sub_1559D0((__int64)&v43, 1, 0.0);
    if ( v43 )
    {
      *(_QWORD *)&v44 = 0;
      qfree(v43);
    }
LABEL_31:
    if ( v12 )
    {
      if ( !under_debugger )
        sub_383060(0xCA07u, a4);
      BUG();
    }
  }
LABEL_32:
  v26 = (_QWORD **)v37;
  if ( v37 )
  {
    do
    {
      sub_1ED6F0(v26[3]);
      v27 = v26;
      v26 = (_QWORD **)v26[2];
      operator delete(v27, 0x28u);
    }
    while ( v26 );
  }
  return v12;
}

