_QWORD *__fastcall sub_A35F0(__int64 a1, __int64 a2, char a3, __m128i a4)
{
  int v4; // r12d
  int v5; // r12d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v13; // [rsp+0h] [rbp-88h]
  _QWORD *v14; // [rsp+0h] [rbp-88h]
  unsigned __int64 *v15; // [rsp+8h] [rbp-80h]
  char v16[16]; // [rsp+10h] [rbp-78h] BYREF
  unsigned __int8 v17[16]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int8 v18[24]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  if ( (a3 & 1) == 0 )
    return nullptr;
  v4 = *(_DWORD *)(a2 + 36);
  if ( (v4 & 1) != 0 )
    return nullptr;
  v5 = v4 >> 1;
  if ( !sub_11CA80(v5) )
    return nullptr;
  v15 = *(unsigned __int64 **)(*(_QWORD *)(a1 + 480) + 112LL);
  sub_123A40((__int64)v16, (unsigned __int8 *)(a2 + 32), v7, v8);
  sub_123A40((__int64)v17, (unsigned __int8 *)(a2 + 32), v9, v10);
  if ( (unsigned __int8)sub_1272B0((unsigned __int64)v16, (__int64)v15, v5, 0)
    && (unsigned __int8)sub_127850((unsigned __int64)v17, (__int64)v15, v5, 0) )
  {
    v11 = (_QWORD *)a2;
    if ( (a3 & 2) == 0 )
    {
      sub_11CA10((char *)(a2 + 32), v16);
      sub_A2B00((__int64)v18, v15, *(_QWORD *)(a2 + 24), a2 + 64, v5, 1, a4);
      v14 = sub_A3240(a1, a2, 1, v17, (unsigned __int8 *)(a2 + 48), v18, a4);
      sub_11CDA0((__int64)v18);
      v11 = v14;
    }
  }
  else
  {
    v11 = nullptr;
  }
  v13 = v11;
  sub_11CDA0((__int64)v17);
  sub_11CDA0((__int64)v16);
  return v13;
}

