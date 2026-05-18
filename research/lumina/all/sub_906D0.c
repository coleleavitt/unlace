__int64 __fastcall sub_906D0(__int64 a1, size_t *a2, int a3, void *a4)
{
  size_t v4; // rax
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rbp
  unsigned int v9; // ebx
  size_t v10; // r15
  __int64 (__fastcall **v12)(); // [rsp+0h] [rbp-58h] BYREF
  unsigned __int8 v13; // [rsp+8h] [rbp-50h]
  int v14; // [rsp+Ch] [rbp-4Ch]
  int v15; // [rsp+10h] [rbp-48h]
  unsigned __int64 v16; // [rsp+18h] [rbp-40h]

  v4 = *a2;
  v16 = __readfsqword(0x28u);
  v14 = a3;
  v13 = 95;
  v15 = v4;
  v12 = off_238CF8;
  if ( (unsigned int)sub_8FE90(a1, (unsigned __int8 *)&v12)
    || *(_DWORD *)(a1 + 248) == 1
    && (sub_8FE90(a1, (unsigned __int8 *)&v12), (unsigned int)sub_8FE90(a1, (unsigned __int8 *)&v12)) )
  {
    v8 = 0;
  }
  else
  {
    v8 = sub_8FC10(a1, v13, 0);
  }
  v9 = sub_8ACB0((_QWORD *)a1, v8, 96, (_BYTE *)(a1 + 288), v6, v7);
  if ( !v9 )
  {
    v10 = *(_QWORD *)(v8 + 24);
    if ( *a2 < v10 )
      sub_4BC40(
        (__int64 (__fastcall ***)(_QWORD))"warning: READ_FILE: client sent more bytes (%zu) than was requested (%zu)\n",
        *(_QWORD *)(v8 + 24),
        *a2);
    memcpy(a4, *(const void **)(v8 + 16), v10);
    *a2 = v10;
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  nullsub_54(&v12);
  return v9;
}
