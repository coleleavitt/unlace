char __fastcall sub_2EDD0(__int64 a1, __int64 *a2, unsigned int a3, unsigned __int64 a4, const char *a5, __int64 a6)
{
  _QWORD *v10; // rdi
  char v11; // r12
  _QWORD *v12; // rbx
  char result; // al
  __int64 v14; // [rsp+0h] [rbp-58h]
  __int64 v15; // [rsp+8h] [rbp-50h]
  __int64 v16; // [rsp+8h] [rbp-50h]
  __int64 v17[9]; // [rsp+10h] [rbp-48h] BYREF

  v10 = *(_QWORD **)(a1 + 512);
  v17[1] = __readfsqword(0x28u);
  v11 = a6;
  if ( v10 )
  {
    v12 = sub_28FD0(v10, a3, (__int64 *)(a1 + 224), (__int64)v17, (__int64)a5, a6, v14, v15, v17[0]);
    if ( !v12 )
      return 0;
    qlseek();
    if ( !(unsigned __int8)sub_2E480(a2, (__int64)v12, -1, a4, v17[0], a5, v11) )
      return 0;
    return a2[1] != 0;
  }
  v16 = sub_28D00(a1, *(_DWORD *)(a1 + 128));
  sub_28D00(a1, a3);
  qlseek();
  result = sub_2E480(a2, *(_QWORD *)(a1 + 48), -1, a4, v16, a5, v11);
  if ( result )
    return a2[1] != 0;
  return result;
}

