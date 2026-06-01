__int64 __fastcall sub_38800(__int64 a1, int *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // ebp
  _QWORD *v7; // rbx
  unsigned __int64 *v8; // rcx
  int v9; // edx
  unsigned __int64 v10; // rax
  const char *v11; // rsi
  bool v12; // zf
  int v13; // eax
  __int64 v14; // rax
  __int64 v16; // [rsp+0h] [rbp-38h] BYREF
  __int64 v17; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v18[5]; // [rsp+10h] [rbp-28h] BYREF

  v6 = *a2;
  v18[1] = __readfsqword(0x28u);
  v7 = *(_QWORD **)a1;
  v8 = *(unsigned __int64 **)(*(_QWORD *)a1 + 56LL);
  v9 = **(_DWORD **)(*(_QWORD *)a1 + 48LL);
  v10 = *v8;
  if ( v9 >= 0 && v6 == v9 + 1 )
  {
    *v8 = v10 + 1;
    ++*(_DWORD *)v7[6];
    return 0;
  }
  if ( v10 > 1 )
  {
    v11 = "-";
    if ( v10 == 2 )
      v11 = (const char *)v7[5];
    (*(void (__fastcall **)(_QWORD, const char *, __int64))(*(_QWORD *)*v7 + 56LL))(*v7, v11, 9);
    v12 = v7[3] == 0;
    v13 = *(_DWORD *)v7[6];
    v17 = *v7;
    LODWORD(v16) = v13;
    if ( v12 )
LABEL_14:
      std::__throw_bad_function_call();
    ((void (__fastcall *)(_QWORD *, __int64 *, __int64 *))v7[4])(v7 + 1, &v17, &v16);
    v10 = *(_QWORD *)v7[7];
  }
  if ( v10 )
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v7 + 56LL))(*v7, v7[5], 9);
  v14 = *v7;
  v12 = v7[3] == 0;
  HIDWORD(v16) = v6;
  v18[0] = v14;
  if ( v12 )
    goto LABEL_14;
  ((void (__fastcall *)(_QWORD *, _QWORD *, char *, unsigned __int64 *, __int64, __int64, __int64))v7[4])(
    v7 + 1,
    v18,
    (char *)&v16 + 4,
    v8,
    a5,
    a6,
    v16);
  *(_DWORD *)v7[6] = v6;
  *(_QWORD *)v7[7] = 1;
  return 0;
}
