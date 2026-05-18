_BOOL8 __fastcall sub_B5990(_QWORD *a1, char **a2, __int64 a3)
{
  char *v3; // rbx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // r13
  __int64 v12; // r13
  __int64 v13; // rax
  void *v14; // rdi
  void *v15; // rdi
  void *v16; // rdi
  __int64 v17; // rax
  unsigned __int64 v18; // [rsp+8h] [rbp-130h]
  __int64 v19; // [rsp+10h] [rbp-128h]
  unsigned __int64 v20; // [rsp+10h] [rbp-128h]
  unsigned __int64 v21; // [rsp+18h] [rbp-120h]
  __int64 v22; // [rsp+20h] [rbp-118h]
  __int64 v23; // [rsp+20h] [rbp-118h]
  bool v24; // [rsp+2Bh] [rbp-10Dh]
  unsigned int v25; // [rsp+2Ch] [rbp-10Ch]
  unsigned int v26; // [rsp+34h] [rbp-104h] BYREF
  char *v27; // [rsp+38h] [rbp-100h] BYREF
  __int64 v28; // [rsp+40h] [rbp-F8h] BYREF
  __int128 v29; // [rsp+48h] [rbp-F0h]
  __int64 v30; // [rsp+58h] [rbp-E0h] BYREF
  __int128 v31; // [rsp+60h] [rbp-D8h]
  __int64 v32; // [rsp+70h] [rbp-C8h] BYREF
  __int128 v33; // [rsp+78h] [rbp-C0h]
  __int128 v34; // [rsp+88h] [rbp-B0h]
  void *v35; // [rsp+A0h] [rbp-98h] BYREF
  __int128 v36; // [rsp+A8h] [rbp-90h]
  void *ptr; // [rsp+B8h] [rbp-80h] BYREF
  __int128 v38; // [rsp+C0h] [rbp-78h]
  __int64 v39; // [rsp+D0h] [rbp-68h] BYREF
  __int128 v40; // [rsp+D8h] [rbp-60h]
  __int64 v41; // [rsp+E8h] [rbp-50h]
  __int64 v42; // [rsp+F0h] [rbp-48h]
  unsigned __int64 v43; // [rsp+F8h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  v27 = *a2;
  v3 = &v27[a3];
  if ( !__CFADD__(a3, v27) )
  {
    v24 = sub_6C650(&v26, (unsigned __int64 *)&v27, (__int64)&v27[a3]);
    if ( v24 )
    {
      v7 = a1[3];
      v25 = v26;
      v21 = v26;
      v18 = v7;
      if ( v26 != v7 )
      {
        v28 = 0;
        v34 = 0;
        v30 = 0;
        v32 = 0;
        v29 = 0;
        v31 = 0;
        v33 = 0;
        if ( v26 < v7 )
        {
          v20 = v26;
          v12 = 88LL * v26;
          do
          {
            v13 = v12 + a1[2];
            v14 = *(void **)(v13 + 48);
            if ( v14 )
            {
              *(_QWORD *)(v13 + 56) = 0;
              v22 = v13;
              j__free(v14);
              v13 = v22;
            }
            v15 = *(void **)(v13 + 24);
            if ( v15 )
            {
              *(_QWORD *)(v13 + 32) = 0;
              v23 = v13;
              j__free(v15);
              v13 = v23;
            }
            v16 = *(void **)v13;
            if ( *(_QWORD *)v13 )
            {
              *(_QWORD *)(v13 + 8) = 0;
              j__free(v16);
            }
            ++v20;
            v12 += 88;
          }
          while ( v20 < v18 );
          a1[3] = v21;
        }
        else
        {
          v8 = a1[2];
          v9 = a1[4];
          if ( (unsigned __int64)&v28 < v8 || (unsigned __int64)&v28 >= v8 + 88 * v9 )
          {
            if ( v9 >= v26 || (v17 = sub_1987B0(a1 + 2, v8, v26, 88), a1[2] = v17, v8 = v17, v18 = a1[3], v18 < v21) )
            {
              v19 = 88 * v18;
              while ( 1 )
              {
                v10 = v8 + v19;
                *(_QWORD *)v10 = 0;
                *(_OWORD *)(v10 + 8) = 0;
                sub_9CBB0((_QWORD *)(v8 + v19), (__int64)&v28);
                *(_QWORD *)(v10 + 24) = 0;
                *(_OWORD *)(v10 + 32) = 0;
                sub_9CBB0((_QWORD *)(v8 + v19 + 24), (__int64)&v30);
                *(_QWORD *)(v10 + 48) = 0;
                *(_OWORD *)(v10 + 56) = 0;
                sub_9CBB0((_QWORD *)(v8 + v19 + 48), (__int64)&v32);
                ++v18;
                v19 += 88;
                *(_QWORD *)(v10 + 72) = 0;
                *(_QWORD *)(v10 + 80) = 0;
                if ( v18 >= v21 )
                  break;
                v8 = a1[2];
              }
              a1[3] = v21;
            }
            else
            {
              a1[3] = v21;
            }
LABEL_13:
            v11 = 0;
            while ( sub_B0C60(v11 + a1[2], &v27, v3 - v27) )
            {
              v11 += 88;
              if ( 88 * v21 == v11 )
                goto LABEL_16;
            }
            return 0;
          }
          v35 = nullptr;
          v36 = 0;
          sub_9CBB0(&v35, (__int64)&v28);
          ptr = nullptr;
          v38 = 0;
          sub_9CBB0(&ptr, (__int64)&v30);
          v39 = 0;
          v40 = 0;
          sub_9CBB0(&v39, (__int64)&v32);
          v41 = 0;
          v42 = 0;
          sub_B57B0(a1 + 2, v21, (__int64)&v35);
          sub_B39B0((__int64)&v35);
        }
      }
      if ( !v25 )
      {
LABEL_16:
        *a2 = v27;
        return v24;
      }
      goto LABEL_13;
    }
  }
  return 0;
}
