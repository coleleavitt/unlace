unsigned __int64 __fastcall sub_187440(__int64 a1, __int64 a2, _BYTE *a3, unsigned int a4)
{
  unsigned __int64 v4; // rax
  const void *v6; // r15
  size_t v8; // rax
  size_t v11; // r12
  const char *v12; // rdi
  _BYTE *v13; // r12
  signed __int64 v14; // r15
  const char *v15; // rdi
  unsigned int v16; // r12d
  void (*v17)(); // rax
  void *v18; // rdi
  signed __int64 v19; // rdx
  void *v20; // rdi
  size_t v21; // rdx
  unsigned int v22; // [rsp+0h] [rbp-68h]
  size_t v23; // [rsp+0h] [rbp-68h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v25; // [rsp+18h] [rbp-50h]
  unsigned __int64 v26; // [rsp+28h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 168);
  if ( v4 < (unsigned __int64)a3 )
  {
    v6 = *(const void **)(a1 + 160);
    if ( v4 < (unsigned __int64)v6 )
      goto LABEL_24;
    v8 = v4 - (_QWORD)v6;
    ptr = nullptr;
    v11 = v8;
    v25 = 0;
    if ( !v8 )
      goto LABEL_5;
    v20 = nullptr;
    v21 = v8 + 1;
    if ( v8 != -1 )
    {
      v23 = v8 + 1;
      ptr = (void *)sub_1987B0(&ptr, 0, v21, 1);
      v21 = v23;
      v20 = ptr;
    }
    *(_QWORD *)&v25 = v21;
    memmove(v20, v6, v11);
    *((_BYTE *)ptr + v11) = 0;
    if ( (_QWORD)v25 )
      v12 = (const char *)ptr;
    else
LABEL_5:
      v12 = s1;
    v22 = sub_18F030(v12);
    if ( ptr )
    {
      *(_QWORD *)&v25 = 0;
      j__free(ptr);
    }
    v13 = *(_BYTE **)(a1 + 168);
    if ( a3 < v13 )
LABEL_24:
      sub_187420();
    ptr = nullptr;
    v25 = 0;
    v14 = a3 - v13;
    if ( a3 == v13 )
      goto LABEL_10;
    v18 = nullptr;
    v19 = v14 + 1;
    if ( v14 != -1 )
    {
      ptr = (void *)sub_1987B0(&ptr, 0, v19, 1);
      v19 = v14 + 1;
      v18 = ptr;
    }
    *(_QWORD *)&v25 = v19;
    memmove(v18, v13, a3 - v13);
    *((_BYTE *)ptr + v14) = 0;
    if ( !(_QWORD)v25 )
LABEL_10:
      v15 = s1;
    else
      v15 = (const char *)ptr;
    v16 = sub_18F030(v15);
    if ( ptr )
    {
      *(_QWORD *)&v25 = 0;
      j__free(ptr);
    }
    v17 = *(void (**)())(*(_QWORD *)a2 + 16LL);
    if ( v17 != nullsub_79 )
      ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))v17)(a2, v22, v16, a4);
    *(_QWORD *)(a1 + 168) = a3;
  }
  return v26 - __readfsqword(0x28u);
}
