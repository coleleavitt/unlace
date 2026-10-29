__int64 __fastcall sub_3F9A0(_QWORD *a1, __int64 a2, __int64 *a3)
{
  void *v4; // rdi
  unsigned __int64 v5; // r13
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r12
  _BYTE *v9; // rbp
  _BYTE *v10; // rbx
  _BYTE *v11; // r8
  __int64 v12; // r9
  size_t v13; // r10
  size_t v14; // r11
  char *v15; // rsi
  size_t v16; // rdx
  unsigned __int64 v17; // rdx
  char *v18; // rdi
  char *v19; // rax
  __int64 v20; // r10
  unsigned __int64 v21; // r9
  __int64 v22; // rbp
  size_t v23; // rbx
  size_t v24; // r9
  char *v25; // rsi
  size_t v26; // rdx
  unsigned int v27; // ebx
  FILE *stream; // [rsp+10h] [rbp-10D8h]
  size_t v30; // [rsp+18h] [rbp-10D0h]
  unsigned __int64 v31; // [rsp+18h] [rbp-10D0h]
  size_t v32; // [rsp+20h] [rbp-10C8h]
  __int64 v33; // [rsp+20h] [rbp-10C8h]
  size_t v34; // [rsp+20h] [rbp-10C8h]
  unsigned __int64 v35; // [rsp+20h] [rbp-10C8h]
  _BYTE *v36; // [rsp+28h] [rbp-10C0h]
  _BYTE *v37; // [rsp+28h] [rbp-10C0h]
  __int64 v38; // [rsp+28h] [rbp-10C0h]
  __int64 v39; // [rsp+30h] [rbp-10B8h]
  size_t v40; // [rsp+38h] [rbp-10B0h]
  char *v42; // [rsp+50h] [rbp-1098h] BYREF
  __int128 v43; // [rsp+58h] [rbp-1090h]
  __int64 v44; // [rsp+70h] [rbp-1078h] BYREF
  __int128 v45; // [rsp+78h] [rbp-1070h]
  __int64 v46; // [rsp+88h] [rbp-1060h]
  char v47; // [rsp+90h] [rbp-1058h]
  _BYTE src[4104]; // [rsp+A0h] [rbp-1048h] BYREF
  unsigned __int64 v49; // [rsp+10A8h] [rbp-40h]

  v4 = (void *)a1[34];
  v49 = __readfsqword(0x28u);
  sub_3E5A0(v4);
  a1[34] = 0;
  a1[35] = a1 + 33;
  a1[36] = a1 + 33;
  a1[37] = 0;
  stream = (FILE *)qfopen();
  if ( stream )
  {
    qfseek();
    v5 = qftell();
    rewind(stream);
    v42 = nullptr;
    v44 = 0;
    v46 = 0;
    v47 = 0;
    v43 = 0;
    v45 = 0;
    if ( v5 )
    {
      while ( 1 )
      {
        v6 = 4096;
        if ( v5 <= 0x1000 )
          v6 = v5;
        v7 = qfread();
        v8 = v7;
        if ( v6 != v7 )
          break;
        v9 = &src[v7];
        v10 = src;
        if ( src[0] == 10 )
        {
LABEL_18:
          v17 = v43;
          if ( (unsigned __int64)v43 <= 1 )
            goto LABEL_28;
LABEL_19:
          v18 = v42;
          v19 = &v42[v17 - 1];
          if ( v42 < v19 )
          {
            while ( *(v19 - 1) == 13 )
            {
              if ( v42 == --v19 )
                goto LABEL_47;
            }
          }
          v20 = v19 - v42;
          if ( v19 != v42 )
          {
            v21 = v20 + 1;
            if ( v17 < v20 + 1 )
            {
              if ( *((_QWORD *)&v43 + 1) < v21 )
              {
                v38 = v19 - v42;
                v35 = v20 + 1;
                v42 = (char *)qvector_reserve();
                v17 = v43;
                v18 = v42;
                v20 = v38;
                v21 = v35;
              }
              v31 = v21;
              v33 = v20;
              memset(&v18[v17], 0, v21 - v17);
              v19 = &v42[v33];
              *(_QWORD *)&v43 = v31;
            }
            else if ( v17 != v20 + 1 )
            {
              *(_QWORD *)&v43 = v20 + 1;
            }
            *v19 = 0;
            goto LABEL_28;
          }
LABEL_47:
          if ( v42 )
          {
            *(_QWORD *)&v43 = 0;
            qfree();
            v42 = nullptr;
            *((_QWORD *)&v43 + 1) = 0;
          }
          while ( 1 )
          {
LABEL_28:
            sub_3F380(a1, (__int64)&v44, &v42);
            if ( v42 )
            {
              *(_QWORD *)&v43 = 0;
              qfree();
              v42 = nullptr;
              *((_QWORD *)&v43 + 1) = 0;
            }
            v11 = v10 + 1;
            if ( v10 + 1 == v9 )
              break;
            if ( v10[1] != 10 )
              goto LABEL_8;
            v17 = v43;
            ++v10;
            if ( (unsigned __int64)v43 > 1 )
              goto LABEL_19;
          }
        }
        else
        {
          while ( 1 )
          {
            v11 = v10;
LABEL_8:
            v10 = v11 + 1;
            if ( v9 == v11 + 1 )
              break;
            if ( v11[1] == 10 )
            {
LABEL_13:
              v12 = v43;
              v13 = v10 - v11;
              v14 = v10 - v11;
              if ( (_QWORD)v43 )
              {
                v12 = v43 - 1;
                v14 = v13 + v43 - 1;
              }
              v15 = v42;
              v16 = v14 + 1;
              if ( *((_QWORD *)&v43 + 1) < v14 + 1 )
              {
                v40 = v14;
                v39 = v12;
                v36 = v11;
                v32 = v10 - v11;
                v30 = v14 + 1;
                v42 = (char *)qvector_reserve();
                v14 = v40;
                v15 = v42;
                v12 = v39;
                v11 = v36;
                v13 = v32;
                v16 = v30;
              }
              *(_QWORD *)&v43 = v16;
              v15[v14] = 0;
              memmove(&v42[v12], v11, v13);
              goto LABEL_18;
            }
            if ( v11 )
            {
              while ( ++v10 != v9 )
              {
                if ( *v10 == 10 )
                  goto LABEL_13;
              }
              break;
            }
          }
          v22 = v43;
          v23 = v10 - v11;
          v24 = v23;
          if ( (_QWORD)v43 )
          {
            v22 = v43 - 1;
            v23 += v43 - 1;
          }
          v25 = v42;
          v26 = v23 + 1;
          if ( *((_QWORD *)&v43 + 1) < v23 + 1 )
          {
            v37 = v11;
            v34 = v24;
            v42 = (char *)qvector_reserve();
            v11 = v37;
            v25 = v42;
            v24 = v34;
            v26 = v23 + 1;
          }
          *(_QWORD *)&v43 = v26;
          v25[v23] = 0;
          memmove(&v42[v22], v11, v24);
        }
        v5 -= v8;
        if ( !v5 )
          goto LABEL_40;
      }
      __errno_location();
      winerr();
      sub_F710(a3);
      v27 = 0;
    }
    else
    {
LABEL_40:
      sub_3F380(a1, (__int64)&v44, &v42);
      sub_3F260(a1, (__int64)&v44);
      v27 = 1;
    }
    if ( v44 )
      qfree();
    if ( v42 )
    {
      *(_QWORD *)&v43 = 0;
      qfree();
    }
    qfclose();
  }
  else
  {
    __errno_location();
    v27 = 0;
    winerr();
    sub_F710(a3);
  }
  return v27;
}

