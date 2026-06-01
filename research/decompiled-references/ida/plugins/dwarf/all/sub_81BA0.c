char *__fastcall sub_81BA0(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // edx
  char *result; // rax
  __int64 v5; // rbp
  int v6; // eax
  __int64 v7; // [rsp+0h] [rbp-48h] BYREF
  __int64 v8; // [rsp+8h] [rbp-40h] BYREF
  __int64 v9[7]; // [rsp+10h] [rbp-38h] BYREF

  v9[3] = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 24);
  v8 = 0;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 88LL) + 64LL))(
         v2,
         &v7,
         &v8);
  result = "<section offset could not be retrieved>";
  if ( !v3 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(v5 + 88) + 48LL))(*(_QWORD *)(a1 + 24));
    v9[1] = v5;
    v9[0] = v7 | ((unsigned __int64)(v6 != 0) << 63);
    return sub_81860(v9, nullptr, 0);
  }
  return result;
}

