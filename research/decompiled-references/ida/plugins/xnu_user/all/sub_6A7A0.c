unsigned __int64 __fastcall sub_6A7A0(_QWORD *a1, __int64 a2, char **a3)
{
  char *v3; // r13
  unsigned __int64 v4; // r14
  char *v5; // rax
  char v7; // dl
  __int64 *v9; // r15
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rcx
  unsigned __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 *v15; // r9
  __int64 v16; // rax
  char *v17; // rdx
  char v18; // r13
  __int64 v19; // r8
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // r10
  __int64 v22; // rax
  char *v23; // rax
  __int64 v24; // r13
  __int128 v25; // kr00_16
  __int64 v26; // rdi
  __int64 v27; // rdi
  unsigned __int64 v29; // r12
  char *v30; // rdx
  char v31; // al
  char v32; // dl
  unsigned __int8 v33; // r10
  char v34; // al
  char v35; // dl
  char v36; // r13
  unsigned __int64 v37; // rax
  __int64 v38; // r12
  char *v39; // r13
  size_t v40; // rax
  size_t v41; // rbx
  void *v42; // rdi
  size_t v43; // r14
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdi
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 *v51; // rax
  __int64 v52; // r12
  __int64 v53; // rsi
  __m128i v54; // xmm0
  __int64 v56; // rax
  __int64 *v57; // [rsp+0h] [rbp-78h]
  unsigned __int64 v58; // [rsp+0h] [rbp-78h]
  __int64 *v59; // [rsp+0h] [rbp-78h]
  __int64 v60; // [rsp+0h] [rbp-78h]
  __int64 *v61; // [rsp+8h] [rbp-70h]
  __int64 v62; // [rsp+8h] [rbp-70h]
  __int64 *v63; // [rsp+8h] [rbp-70h]
  __int64 v64; // [rsp+10h] [rbp-68h]
  __int64 v65; // [rsp+18h] [rbp-60h]
  __int64 v66; // [rsp+20h] [rbp-58h] BYREF
  __int128 v67; // [rsp+28h] [rbp-50h]
  unsigned __int64 v68; // [rsp+38h] [rbp-40h]

  v68 = __readfsqword(0x28u);
  v3 = a3[1];
  if ( v3 )
  {
    v4 = (unsigned __int64)(v3 - 1);
    if ( (unsigned __int64)(v3 - 1) > 2 )
    {
      v5 = *a3;
      if ( (*a3)[1] == 32 )
      {
        v7 = *v5;
        if ( (*v5 & 0xFD) == 0x3C )
        {
          if ( v3 == &byte_4 && v5[2] == 43 )
          {
            *(_BYTE *)(a2 + 32) = v7 == 60;
            return v68 - __readfsqword(0x28u);
          }
          if ( v7 != 62 )
          {
            ++*(_QWORD *)(a2 + 24);
            v9 = sub_6A3B0(a1, a2);
            v10 = v9[1];
            if ( *(_QWORD *)(a2 + 24) <= 1u )
            {
              v29 = v9[2];
              if ( v29 < v10 + 1 )
              {
                v47 = qvector_reserve();
                v48 = *v9;
                v64 = v47;
                v49 = v47;
                v50 = v9[2];
                v9[2] = v29;
                v65 = v50;
                v51 = (__int64 *)v48;
                v52 = v9[1] - 1;
                if ( v52 >= 0 )
                {
                  do
                  {
                    v53 = *v51;
                    v54 = _mm_loadu_si128((const __m128i *)(v51 + 1));
                    *v51 = 0;
                    v51[2] = 0;
                    *(_QWORD *)v49 = v53;
                    *(__m128i *)(v49 + 8) = v54;
                    *(_BYTE *)(v49 + 24) = *((_BYTE *)v51 + 24);
                    if ( *v51 )
                    {
                      v51[1] = 0;
                      v62 = v49;
                      v59 = v51;
                      qfree();
                      v49 = v62;
                      v51 = v59;
                    }
                    v51 += 4;
                    v49 += 32;
                  }
                  while ( v52-- != 0 );
                }
                qfree();
                *v9 = v64;
                v9[2] = v65;
                v10 = v9[1];
              }
              else
              {
                v64 = *v9;
              }
              v11 = 32 * v10 + v64;
              *(_QWORD *)v11 = 0;
              *(_BYTE *)(v11 + 24) = 0;
              *(_OWORD *)(v11 + 8) = 0;
              ++v9[1];
            }
            else
            {
              v11 = *v9 + 32 * v10 - 32;
            }
            v12 = *(_QWORD *)(v11 + 8);
            v13 = *(_QWORD *)(v11 + 16);
            v14 = *(_QWORD *)v11;
            if ( v13 < (unsigned __int64)&v3[v12] )
            {
              v44 = qvector_reserve();
              v13 = *(_QWORD *)(v11 + 16);
              v12 = *(_QWORD *)(v11 + 8);
              *(_QWORD *)v11 = v44;
              v14 = v44;
            }
            v15 = &v66;
            if ( *(_BYTE *)(a2 + 32) )
            {
              LOBYTE(v66) = 43;
              if ( v13 < v12 + 1 )
              {
                v45 = qvector_reserve();
                v12 = *(_QWORD *)(v11 + 8);
                v15 = &v66;
                *(_QWORD *)v11 = v45;
                v14 = v45;
              }
              *(_BYTE *)(v14 + v12) = 43;
              v14 = *(_QWORD *)v11;
              v13 = *(_QWORD *)(v11 + 16);
              v12 = *(_QWORD *)(v11 + 8) + 1LL;
              *(_QWORD *)(v11 + 8) = v12;
            }
            v16 = 2;
            while ( 1 )
            {
              v19 = v16 + 4;
              v20 = v16 + 1;
              if ( v4 >= v16 + 4 )
              {
                if ( !((unsigned __int64)a3[1] | v16) )
                  goto LABEL_43;
                v17 = *a3;
                v18 = (*a3)[v16];
                if ( v18 != 92 )
                  goto LABEL_15;
                v21 = v16 + 2;
                if ( v17[v16 + 1] == 120 )
                {
                  v30 = &v17[v21];
                  v31 = *v30;
                  v32 = v30[1];
                  v33 = v32 - 48;
                  if ( (unsigned __int8)(v31 - 48) <= 9u )
                  {
                    v34 = v31 - 48;
                    if ( v33 <= 9u )
                      goto LABEL_67;
                  }
                  else
                  {
                    if ( (unsigned __int8)(v31 - 97) > 5u )
                    {
                      if ( (unsigned __int8)(v31 - 65) > 5u )
                        goto LABEL_15;
                      v34 = v31 - 55;
                      if ( v33 > 9u )
                        goto LABEL_50;
LABEL_67:
                      v35 = v32 - 48;
LABEL_53:
                      LOBYTE(v66) = v35 | (16 * v34);
                      v36 = v66;
                      if ( v13 < v12 + 1 )
                      {
                        v63 = v15;
                        v60 = v19;
                        v56 = qvector_reserve();
                        v12 = *(_QWORD *)(v11 + 8);
                        v15 = v63;
                        *(_QWORD *)v11 = v56;
                        v19 = v60;
                        v14 = v56;
                      }
                      *(_BYTE *)(v14 + v12) = v36;
                      v20 = v19;
                      ++*(_QWORD *)(v11 + 8);
                      goto LABEL_17;
                    }
                    v34 = v31 - 87;
                    if ( v33 <= 9u )
                      goto LABEL_67;
                  }
LABEL_50:
                  if ( (unsigned __int8)(v32 - 97) <= 5u )
                  {
                    v35 = v32 - 87;
                  }
                  else
                  {
                    if ( (unsigned __int8)(v32 - 65) > 5u )
                      goto LABEL_15;
                    v35 = v32 - 55;
                  }
                  goto LABEL_53;
                }
                if ( v4 < v21 )
                  goto LABEL_15;
              }
              else
              {
                v21 = v16 + 2;
                if ( v4 < v16 + 2 )
                {
                  v18 = (*a3)[v16];
                  LOBYTE(v66) = v18;
                  if ( v13 >= v12 + 1 )
                    goto LABEL_16;
                  goto LABEL_22;
                }
                if ( !((unsigned __int64)a3[1] | v16) )
                {
LABEL_43:
                  v18 = 0;
LABEL_15:
                  LOBYTE(v66) = v18;
                  if ( v13 >= v12 + 1 )
                  {
LABEL_16:
                    *(_BYTE *)(v14 + v12) = v18;
                    ++*(_QWORD *)(v11 + 8);
                    goto LABEL_17;
                  }
LABEL_22:
                  v57 = v15;
                  v22 = qvector_reserve();
                  v12 = *(_QWORD *)(v11 + 8);
                  v15 = v57;
                  *(_QWORD *)v11 = v22;
                  v14 = v22;
                  goto LABEL_16;
                }
                v17 = *a3;
                v18 = (*a3)[v16];
                if ( v18 != 92 )
                  goto LABEL_15;
              }
              v18 = 92;
              if ( v17[v20] != 92 )
                goto LABEL_15;
              LOBYTE(v66) = 92;
              if ( v13 < v12 + 1 )
              {
                v61 = v15;
                v58 = v21;
                v46 = qvector_reserve();
                v12 = *(_QWORD *)(v11 + 8);
                v15 = v61;
                *(_QWORD *)v11 = v46;
                v21 = v58;
                v14 = v46;
              }
              *(_BYTE *)(v14 + v12) = 92;
              v20 = v21;
              ++*(_QWORD *)(v11 + 8);
LABEL_17:
              if ( v20 >= v4 )
                goto LABEL_29;
              v14 = *(_QWORD *)v11;
              v13 = *(_QWORD *)(v11 + 16);
              v16 = v20;
              v12 = *(_QWORD *)(v11 + 8);
            }
          }
          sub_6A680(a1, a2);
          v23 = a3[1];
          if ( !v23 )
            goto LABEL_24;
          v37 = (unsigned __int64)(v23 - 1);
          v38 = 2;
          v39 = *a3;
          v67 = 0;
          v66 = 0;
          if ( v37 <= 2 )
            v38 = v37;
          v40 = v37 - v38;
          v41 = v40;
          if ( v40 )
          {
            v42 = nullptr;
            v43 = v40 + 1;
            if ( v40 != -1 )
            {
              v66 = qvector_reserve();
              v42 = (void *)v66;
            }
            *(_QWORD *)&v67 = v43;
            memmove(v42, &v39[v38], v41);
            *(_BYTE *)(v66 + v41) = 0;
            v24 = v66;
            v25 = v67;
          }
          else
          {
LABEL_24:
            v24 = 0;
            v25 = 0u;
          }
          v26 = *(_QWORD *)a2;
          v66 = 0;
          v67 = 0;
          if ( v26 )
          {
            *(_QWORD *)(a2 + 8) = 0;
            qfree();
            v27 = v66;
            *(_QWORD *)a2 = v24;
            *(_OWORD *)(a2 + 8) = v25;
            if ( v27 )
            {
              *(_QWORD *)&v67 = 0;
              qfree();
            }
          }
          else
          {
            *(_QWORD *)a2 = v24;
            *(_OWORD *)(a2 + 8) = v25;
          }
          *(_QWORD *)(a2 + 24) = 0;
LABEL_29:
          *(_BYTE *)(a2 + 32) = 0;
        }
      }
    }
  }
  return v68 - __readfsqword(0x28u);
}

