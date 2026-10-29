__int64 __fastcall sub_BD4C0(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _DWORD *v9; // r12
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r9d
  _QWORD v15[5]; // [rsp+0h] [rbp-88h] BYREF
  char v16; // [rsp+28h] [rbp-60h]
  __int64 v17; // [rsp+30h] [rbp-58h]
  __int64 v18; // [rsp+38h] [rbp-50h]
  unsigned __int64 v19; // [rsp+48h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 328);
  v19 = __readfsqword(0x28u);
  v18 = a1 + 64;
  v3 = (int)a2;
  v4 = HIDWORD(a2);
  v15[1] = v2;
  v5 = *(_QWORD *)(a1 + 320);
  memset(&v15[2], 0, 24);
  v6 = *(_QWORD *)(v5 + 528);
  v16 = 0;
  v15[0] = &off_4DC068;
  v17 = a1;
  v9 = (_DWORD *)sub_330E60(*(_QWORD *)(v6 + 8 * v3), v4);
  if ( (unsigned int)(*v9 - 56) <= 1 && !v9[17] )
    return 0;
  v10 = j__qalloc_or_throw(80, v4, v7, v8);
  *(_OWORD *)(v10 + 8) = 0;
  *(_QWORD *)(v10 + 40) = 0;
  *(_QWORD *)(v10 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v10 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v10 + 56) = 0;
  *(_QWORD *)(v10 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v10 + 72) = 0;
  sub_1253A0(v10, (__int64)v9);
  if ( (unsigned int)sub_11E900((_BYTE *)v10, (__int64)v15)
    || (unsigned __int8)sub_1205A0((_BYTE *)v10, *(_QWORD *)(*(_QWORD *)(a1 + 320) + 1504LL), 0, v11, v12, v13) )
  {
    if ( v10 )
    {
      sub_11CDA0(v10 + 64);
      sub_11CDA0(v10 + 48);
      sub_11CDA0(v10 + 32);
      j__qfree(v10);
    }
    return 0;
  }
  return v10;
}

