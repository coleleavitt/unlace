__int64 __fastcall sub_118900(__int64 a1, const __m128i *a2, __int64 a3, char *a4)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // r9d
  __int64 v11; // rbx
  _DWORD *v13; // rdi
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rdx
  int v17; // ecx
  int v18; // eax
  _DWORD *v19; // rcx
  unsigned __int8 *v20; // [rsp+0h] [rbp-68h] BYREF
  _DWORD *v21; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v22[11]; // [rsp+10h] [rbp-58h] BYREF

  v22[3] = __readfsqword(0x28u);
  v7 = sub_11C8E0((__int64)a4, &v20, 11);
  if ( !v7 )
    return 0;
  v11 = v7;
  if ( *(_BYTE *)(v7 + 32) != 4 )
    return 0;
  v13 = *(_DWORD **)(v7 + 40);
  if ( *v13 != 14 || (unsigned __int64)*((int *)v20 + 1) > 7 )
    return 0;
  if ( *v20 == 4 )
  {
    if ( !(unsigned __int8)sub_1205A0(*((_BYTE **)v20 + 1), a1, 0, v8, v9, v10) )
    {
      v13 = *(_DWORD **)(v11 + 40);
      goto LABEL_7;
    }
    return 0;
  }
LABEL_7:
  v14 = sub_11C8A0((__int64)v13, &v21);
  if ( !v14 )
    return 0;
  v15 = (__int64)v21;
  if ( *(_BYTE *)v21 == 4 )
  {
    v19 = *((_DWORD **)v21 + 1);
    if ( (unsigned int)(*v19 - 8) <= 1 )
    {
      v15 = (__int64)(v19 + 8);
      v21 = v19 + 8;
    }
  }
  if ( !sub_1255D0(v20, a1, v15, 1)
    && (!a2 || !(unsigned __int8)sub_12EA80(a1, a2, a3, (__int64)v20, a3, (__int64)v21, 1)) )
  {
    return 0;
  }
  v16 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v14 + 8) + 16LL), *(_DWORD *)(v14 + 4), 0);
  v17 = 8 * *((_DWORD *)v20 + 1);
  if ( (unsigned __int64)v17 <= 0x3F )
    v16 += 1LL << v17;
  sub_120A10(v14, a1, v16, *(_DWORD *)(v14 + 4), -1, 0);
  *(_DWORD *)a4 = 11;
  v18 = *(_DWORD *)(v11 + 4);
  v22[1] = 0;
  *((_DWORD *)a4 + 1) = v18;
  v22[0] = 0xFFFFFFFF00000000LL;
  sub_11CA10((char *)v22, (char *)(v11 + 32));
  sub_11CA10(a4 + 32, (char *)v22);
  sub_11CDA0((__int64)(a4 + 48));
  sub_11CDA0((__int64)v22);
  return 1;
}

