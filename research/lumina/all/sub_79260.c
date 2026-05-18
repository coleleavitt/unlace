unsigned __int64 __fastcall sub_79260(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rbx
  unsigned __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v10; // r14
  __int64 v11; // rbx
  _QWORD *v12; // r15
  void *v13; // rdi
  void *v14; // rdi
  void *v15; // rdi
  __int64 v16; // rax
  int v17; // [rsp+Ch] [rbp-27Ch]
  __int64 v18; // [rsp+20h] [rbp-268h] BYREF
  __int128 v19; // [rsp+28h] [rbp-260h]
  int v20; // [rsp+38h] [rbp-250h]
  _BYTE v21[24]; // [rsp+40h] [rbp-248h] BYREF
  char v22[24]; // [rsp+58h] [rbp-230h] BYREF
  char v23[32]; // [rsp+70h] [rbp-218h] BYREF
  int v24; // [rsp+90h] [rbp-1F8h] BYREF
  void *v25; // [rsp+98h] [rbp-1F0h] BYREF
  __int128 v26; // [rsp+A0h] [rbp-1E8h]
  _BYTE v27[72]; // [rsp+B0h] [rbp-1D8h] BYREF
  void *v28; // [rsp+F8h] [rbp-190h]
  __int64 v29; // [rsp+128h] [rbp-160h]
  void *ptr; // [rsp+130h] [rbp-158h] BYREF
  __int128 v31; // [rsp+138h] [rbp-150h]
  int v32; // [rsp+148h] [rbp-140h]
  __int64 v33; // [rsp+150h] [rbp-138h]
  __int128 v34; // [rsp+158h] [rbp-130h]
  void *v35; // [rsp+170h] [rbp-118h] BYREF
  void *v36[3]; // [rsp+178h] [rbp-110h] BYREF
  __int128 v37; // [rsp+190h] [rbp-F8h] BYREF
  __int64 v38; // [rsp+1A0h] [rbp-E8h] BYREF
  __int128 v39; // [rsp+1A8h] [rbp-E0h]
  __int64 v40; // [rsp+1B8h] [rbp-D0h]
  __int128 v41; // [rsp+1C0h] [rbp-C8h]
  int v42; // [rsp+1D0h] [rbp-B8h]
  __int64 v43; // [rsp+1D8h] [rbp-B0h]
  int v44; // [rsp+1E0h] [rbp-A8h]
  __int64 v45; // [rsp+208h] [rbp-80h]
  __int64 v46; // [rsp+210h] [rbp-78h] BYREF
  __int128 v47; // [rsp+218h] [rbp-70h]
  int v48; // [rsp+228h] [rbp-60h]
  __int64 v49; // [rsp+230h] [rbp-58h]
  __int128 v50; // [rsp+238h] [rbp-50h]
  unsigned __int64 v51; // [rsp+248h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  if ( a1[1] == a2 )
    return v51 - __readfsqword(0x28u);
  v19 = 0;
  v18 = 0;
  v20 = 0;
  sub_73590((__int64)v21, nullptr, nullptr, nullptr);
  v35 = nullptr;
  *(_OWORD *)v36 = 0;
  sub_66360(&v35, (__int64)v21);
  v36[2] = nullptr;
  v37 = 0;
  sub_66360(&v36[2], (__int64)v22);
  v38 = 0;
  v39 = 0;
  sub_66360(&v38, (__int64)v23);
  v40 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v24 = 0;
  v25 = nullptr;
  v41 = 0;
  v26 = 0;
  sub_2F620((__int64)v27, (__int64)&v35);
  v29 = 0;
  sub_2F5C0((__int64)&v35);
  sub_2F570((__int64)v21);
  v31 = 0;
  ptr = nullptr;
  sub_66360(&ptr, (__int64)&v18);
  v3 = a1[1];
  v32 = 0;
  v33 = 0;
  v34 = 0;
  if ( a2 < v3 )
  {
    v10 = a2;
    v11 = 216 * a2;
    do
    {
      v12 = (_QWORD *)(v11 + *a1);
      v13 = (void *)v12[24];
      if ( v13 )
      {
        v12[25] = 0;
        j__free(v13);
      }
      v14 = (void *)v12[20];
      if ( v14 )
      {
        v12[21] = 0;
        j__free(v14);
      }
      sub_2F5C0((__int64)(v12 + 4));
      v15 = (void *)v12[1];
      if ( v15 )
      {
        v12[2] = 0;
        j__free(v15);
      }
      ++v10;
      v11 += 216;
    }
    while ( v3 != v10 );
LABEL_9:
    a1[1] = a2;
    goto LABEL_10;
  }
  if ( v3 < a2 )
  {
    v4 = *a1;
    v5 = a1[2];
    if ( (unsigned __int64)&v24 >= *a1 && (unsigned __int64)&v24 < v4 + 216 * v5 )
    {
      memset(v36, 0, sizeof(v36));
      LODWORD(v35) = v24;
      sub_66360(v36, (__int64)&v25);
      sub_2F620((__int64)&v37, (__int64)v27);
      v46 = 0;
      v45 = v29;
      v47 = 0;
      sub_66360(&v46, (__int64)&ptr);
      v48 = 0;
      v49 = 0;
      v50 = 0;
      sub_78E60(a1, a2, (__int64)&v35);
      sub_756E0(&v35);
      goto LABEL_10;
    }
    if ( v5 >= a2 || (v16 = sub_1987B0(a1, v4, a2, 216), v3 = a1[1], *a1 = v16, v4 = v16, v3 < a2) )
    {
      v17 = v24;
      v6 = 216 * v3;
      while ( 1 )
      {
        v7 = v6 + v4;
        *(_QWORD *)(v7 + 8) = 0;
        *(_DWORD *)v7 = v17;
        *(_OWORD *)(v7 + 16) = 0;
        sub_66360((_QWORD *)(v7 + 8), (__int64)&v25);
        sub_2F620(v7 + 32, (__int64)v27);
        v8 = v29;
        *(_QWORD *)(v7 + 160) = 0;
        *(_OWORD *)(v7 + 168) = 0;
        *(_QWORD *)(v7 + 152) = v8;
        sub_66360((_QWORD *)(v7 + 160), (__int64)&ptr);
        ++v3;
        *(_DWORD *)(v7 + 184) = 0;
        v6 += 216;
        *(_QWORD *)(v7 + 192) = 0;
        *(_OWORD *)(v7 + 200) = 0;
        if ( v3 >= a2 )
          break;
        v4 = *a1;
      }
    }
    goto LABEL_9;
  }
LABEL_10:
  if ( ptr )
    j__free(ptr);
  if ( v28 )
    j__free(v28);
  sub_2F570((__int64)v27);
  if ( v25 )
    j__free(v25);
  return v51 - __readfsqword(0x28u);
}
