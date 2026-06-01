__int64 __fastcall sub_72150(_QWORD *a1)
{
  unsigned __int64 v1; // rax
  unsigned int *v2; // rbx
  __int64 v3; // rbp
  unsigned int *v4; // r14
  unsigned int v5; // r13d
  unsigned int v7; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-40h]

  v1 = a1[43];
  v8 = __readfsqword(0x28u);
  if ( v1 > 0x2710 )
  {
    sub_55340((__int64)a1);
    v1 = a1[43];
  }
  v2 = (unsigned int *)a1[42];
  v3 = 0;
  v4 = &v2[v1];
  if ( v4 == v2 )
    return 1;
  while ( 1 )
  {
    ++v3;
    v5 = *v2;
    if ( __ROR8__(0xD288CE703AFB7E91LL * v3, 4) <= 0x68DB8BAC710CBuLL )
      break;
LABEL_7:
    if ( (unsigned __int8)sub_6F820(a1, &v7, v5, 0) )
      *(_DWORD *)(*(_QWORD *)(*a1 + 8LL * v7) + 60LL) = 1;
    if ( v4 == ++v2 )
      return 1;
  }
  if ( !(unsigned __int8)callui(27) )
  {
    sub_55340((__int64)a1);
    goto LABEL_7;
  }
  return 0;
}

