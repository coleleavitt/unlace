__int64 __fastcall sub_6B500(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 (*v3)(void); // rax
  __int64 v4; // rbp
  __int64 v5; // rax
  unsigned int v6; // edx
  _QWORD v8[7]; // [rsp+0h] [rbp-38h] BYREF

  v2 = *a1;
  v8[3] = __readfsqword(0x28u);
  v3 = *(__int64 (**)(void))(v2 + 56);
  if ( (char *)v3 == (char *)sub_6B4E0 )
    v4 = sub_6B440(*(_QWORD *)(a1[3] + 256), a1[4], a1[2]);
  else
    v4 = v3();
  v5 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 64))(a1);
  v6 = 0;
  if ( v4 != -1 )
  {
    v8[0] = v4;
    v8[1] = v5 + v4;
    rangeset_t_add(a2, v8);
    return 1;
  }
  return v6;
}

