__int64 __fastcall sub_3D960(__int64 a1)
{
  unsigned int v2; // ebp
  __int64 v4; // rdi
  __int16 v5; // ax
  const char *v6; // r15
  size_t v7; // rax
  size_t v8; // r14
  size_t v9; // r13
  __int64 v10; // rax
  const char *v11; // r12
  _QWORD *v12; // r15
  unsigned __int64 v13; // r13
  __int64 i; // r14
  __int64 *v15; // r14
  size_t v16; // r15
  __int64 v17; // r13
  __int64 v18; // rsi
  size_t v19; // rdx
  char *v20; // rax
  char *v21; // r9
  __int64 v22; // rax
  _QWORD *v23; // rax
  size_t v24; // r12
  _QWORD *v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // r12
  __int64 v28; // rbx
  _QWORD *v29; // rax
  __int64 v30; // rax
  size_t v31; // r9
  char *v32; // r8
  char *v33; // [rsp+0h] [rbp-E8h]
  char *v34; // [rsp+0h] [rbp-E8h]
  char *v35; // [rsp+8h] [rbp-E0h]
  size_t v36; // [rsp+10h] [rbp-D8h]
  char *v37; // [rsp+10h] [rbp-D8h]
  size_t v38; // [rsp+18h] [rbp-D0h]
  unsigned __int16 v39; // [rsp+2Eh] [rbp-BAh]
  void *src; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v41; // [rsp+38h] [rbp-B0h]
  void *v42; // [rsp+50h] [rbp-98h] BYREF
  size_t n[3]; // [rsp+58h] [rbp-90h]
  __int64 v44; // [rsp+70h] [rbp-78h]
  __int128 v45; // [rsp+78h] [rbp-70h]
  _BYTE *v46; // [rsp+90h] [rbp-58h] BYREF
  __int128 v47; // [rsp+98h] [rbp-50h]
  unsigned __int64 v48; // [rsp+A8h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 258) & 4) != 0 || (v2 = 0, (getinf() & 0x1006) == 0x1002) )
  {
    v2 = sub_3D560((_QWORD *)a1);
    if ( !(_BYTE)v2 )
    {
      v4 = *(_QWORD *)(a1 + 616);
      v41 = 0;
      src = nullptr;
      v2 = sub_3AC40(v4, (__int64)&src, a1 + 224);
      if ( !(_BYTE)v2 )
      {
LABEL_44:
        if ( src )
        {
          *(_QWORD *)&v41 = 0;
          qfree();
        }
        return v2;
      }
      v5 = *(_WORD *)(a1 + 248);
      v39 = *(_WORD *)(a1 + 160LL * (v5 != 26) + 270);
      v6 = *(const char **)(*(_QWORD *)(*(_QWORD *)(a1 + 624) + 56LL) + 8LL * v39);
      *(_OWORD *)n = 0;
      v42 = nullptr;
      if ( v6 )
      {
        v7 = strlen(v6);
        v8 = v7 + 1;
        v9 = v7;
        v42 = (void *)qvector_reserve();
        n[0] = v8;
        memmove(v42, v6, v9);
        *((_BYTE *)v42 + v9) = 0;
        v5 = *(_WORD *)(a1 + 248);
      }
      switch ( v5 )
      {
        case 27:
          v47 = 0;
          v46 = nullptr;
          v46 = (_BYTE *)qvector_reserve();
          *(_QWORD *)&v47 = 1;
          *v46 = 0;
          sub_38E40((_QWORD *)a1, (__int64)&src, (__int64)&v42, &v46);
          if ( !v46 )
            goto LABEL_42;
          break;
        case 26:
          v47 = 0;
          v46 = nullptr;
          v46 = (_BYTE *)qvector_reserve();
          *(_QWORD *)&v47 = 1;
          *v46 = 0;
          sub_38E40((_QWORD *)a1, (__int64)&v42, (__int64)&src, &v46);
          if ( !v46 )
          {
LABEL_42:
            if ( v42 )
            {
              n[0] = 0;
              qfree();
            }
            goto LABEL_44;
          }
          break;
        case 535:
          v10 = v41;
          v44 = 0;
          v45 = 0;
          if ( (_QWORD)v41 )
          {
            v11 = (const char *)src;
            v12 = nullptr;
            v35 = (char *)src + v41 - 1;
            if ( src >= v35 )
              goto LABEL_26;
            v13 = 0;
            for ( i = 0; ; i = v45 )
            {
              v20 = strchr(v11, 32);
              v21 = v35;
              v32 = v20;
              if ( v20 )
                v21 = v20;
              v31 = v21 - v11;
              if ( v13 < i + 1 )
              {
                v34 = v20;
                v36 = v31;
                v44 = qvector_reserve();
                i = v45;
                v12 = (_QWORD *)v44;
                v31 = v36;
                v32 = v34;
              }
              v15 = &v12[3 * i];
              v16 = v31;
              *(_OWORD *)(v15 + 1) = 0;
              *v15 = 0;
              *(_QWORD *)&v45 = v45 + 1;
              v17 = v15[1];
              if ( v17 )
              {
                --v17;
                v16 = v31 + v17;
              }
              v18 = *v15;
              v19 = v16 + 1;
              if ( v16 != -1 )
              {
                v38 = v31;
                v37 = v32;
                v30 = qvector_reserve();
                v31 = v38;
                v32 = v37;
                *v15 = v30;
                v18 = v30;
                v19 = v16 + 1;
              }
              v15[1] = v19;
              *(_BYTE *)(v18 + v16) = 0;
              v33 = v32;
              memmove((void *)(v17 + *v15), v11, v31);
              v12 = (_QWORD *)v44;
              if ( !v33 )
                break;
              v11 = v33 + 1;
              if ( v33 + 1 >= v35 )
                break;
              v13 = *((_QWORD *)&v45 + 1);
            }
            v10 = v41;
            if ( (_QWORD)v41 )
            {
LABEL_26:
              if ( v10 != 1 && *((char *)src + v10 - 2) == 32 )
              {
                v22 = v45;
                if ( *((_QWORD *)&v45 + 1) < (unsigned __int64)(v45 + 1) )
                {
                  v44 = qvector_reserve();
                  v12 = (_QWORD *)v44;
                  v22 = v45;
                }
                v23 = &v12[3 * v22];
                *v23 = 0;
                v12 = (_QWORD *)v44;
                *(_OWORD *)(v23 + 1) = 0;
                *(_QWORD *)&v45 = v45 + 1;
              }
            }
          }
          else
          {
            v12 = nullptr;
          }
          v46 = nullptr;
          v47 = 0;
          if ( v39 == 160 )
          {
            v46 = (_BYTE *)qvector_reserve();
            *(_QWORD *)&v47 = 1;
            *v46 = 0;
            v25 = (_QWORD *)v44;
          }
          else
          {
            v24 = n[0];
            v25 = v12;
            if ( n[0] )
            {
              v46 = (_BYTE *)qalloc_or_throw();
              *((_QWORD *)&v47 + 1) = v24;
              memcpy(v46, v42, v24);
              *(_QWORD *)&v47 = v24;
              v25 = (_QWORD *)v44;
            }
          }
          sub_38E40((_QWORD *)a1, (__int64)(v25 + 3), (__int64)&v46, v12);
          if ( v46 )
          {
            *(_QWORD *)&v47 = 0;
            qfree();
          }
          v26 = v44;
          if ( v44 )
          {
            v27 = v45;
            if ( (_QWORD)v45 )
            {
              v28 = 0;
              do
              {
                v29 = (_QWORD *)(v26 + 24 * v28);
                if ( *v29 )
                {
                  v29[1] = 0;
                  qfree();
                  v26 = v44;
                }
                ++v28;
              }
              while ( v27 != v28 );
            }
            *(_QWORD *)&v45 = 0;
            qfree();
          }
          goto LABEL_42;
        default:
          if ( !under_debugger )
            interr();
          BUG();
      }
      *(_QWORD *)&v47 = 0;
      qfree();
      goto LABEL_42;
    }
  }
  return v2;
}

