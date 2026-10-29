__int64 __fastcall sub_14DE90(__int64 a1, double a2)
{
  unsigned __int8 *v2; // rbp
  unsigned __int8 *v3; // r12
  int v4; // eax
  unsigned __int8 *v6; // rdx
  unsigned __int8 *v7; // r15
  unsigned __int8 *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  char v13[16]; // [rsp+0h] [rbp-68h] BYREF
  char v14[24]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-40h]

  v2 = *(unsigned __int8 **)(a1 + 56);
  v3 = *(unsigned __int8 **)(a1 + 40);
  v15 = __readfsqword(0x28u);
  v4 = *(_DWORD *)v3;
  if ( *(_DWORD *)v2 != 33 )
  {
    if ( v4 != 33 )
      return 0;
    v4 = *(_DWORD *)v2;
    v6 = v3;
    v3 = v2;
    v2 = v6;
  }
  if ( (unsigned int)(v4 - 34) > 1 )
    return 0;
  if ( v4 == 34 )
  {
    if ( v2[32] != 4 || **((_DWORD **)v2 + 5) != 13 )
      return 0;
    v8 = v2 + 48;
    if ( sub_125B60(v3 + 32, (__int64)(v2 + 48), 0, a2)
      && sub_125B60((unsigned __int8 *)(*((_QWORD *)v2 + 5) + 32LL), (__int64)(v3 + 32), 0, a2)
      && sub_125B60((unsigned __int8 *)(*((_QWORD *)v2 + 5) + 48LL), (__int64)(v3 + 48), 0, a2) )
    {
      v7 = v2 + 32;
      goto LABEL_12;
    }
    if ( *(_DWORD *)v3 != 35 )
      return 0;
  }
  if ( v2[48] != 4 )
    return 0;
  if ( **((_DWORD **)v2 + 7) != 13 )
    return 0;
  v7 = v2 + 32;
  if ( !sub_125B60(v3 + 32, (__int64)(v2 + 32), 0, a2) )
    return 0;
  if ( !sub_125B60((unsigned __int8 *)(*((_QWORD *)v2 + 7) + 32LL), (__int64)(v3 + 32), 0, a2) )
    return 0;
  v8 = v2 + 48;
  if ( !sub_125B60((unsigned __int8 *)(*((_QWORD *)v2 + 7) + 48LL), (__int64)(v3 + 48), 0, a2) )
    return 0;
LABEL_12:
  *(_DWORD *)a1 = 37;
  *(_DWORD *)(a1 + 4) = *((_DWORD *)v3 + 1);
  sub_123A40((__int64)v13, v7, v9, v10);
  sub_123A40((__int64)v14, v8, v11, v12);
  sub_11CA10((char *)(a1 + 32), v13);
  sub_11CA10((char *)(a1 + 48), v14);
  sub_11CDA0((__int64)v14);
  sub_11CDA0((__int64)v13);
  return 1;
}

