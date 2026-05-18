__int64 __fastcall sub_4FEE0(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ecx
  __int64 result; // rax
  unsigned int v6; // edx
  _QWORD v7[4]; // [rsp+0h] [rbp-58h] BYREF
  int v8; // [rsp+26h] [rbp-32h]
  __int16 v9; // [rsp+2Ah] [rbp-2Eh]
  int v10; // [rsp+2Ch] [rbp-2Ch]
  __int16 v11; // [rsp+30h] [rbp-28h]
  unsigned __int64 v12; // [rsp+38h] [rbp-20h]

  v3 = *(_DWORD *)a2;
  v12 = __readfsqword(0x28u);
  v11 = 0;
  v10 = 0;
  v8 = 0;
  v9 = 0;
  if ( (v3 || *(_WORD *)(a2 + 4)) && sub_4CB80(a1, a2) )
    return sub_4FDF0(a1, nullptr, a2, a3);
  v7[1] = a1;
  v7[0] = &off_2367B8;
  v7[2] = a2;
  v7[3] = a3;
  v6 = ((__int64 (__fastcall *)(_QWORD *))sub_5A420)(v7);
  result = 0;
  if ( *(_QWORD *)(a1 + 136) )
    return v6;
  return result;
}
