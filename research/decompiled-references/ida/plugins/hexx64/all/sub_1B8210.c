__int64 __fastcall sub_1B8210(const __m128i *a1, __int64 a2, __int64 a3, __m128i a4, __m128 a5)
{
  __int64 v5; // rax
  unsigned __int64 *v7; // r13
  unsigned int v8; // ebp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // [rsp-8h] [rbp-88h]
  __int64 v13; // [rsp+0h] [rbp-80h]
  unsigned __int8 v14[16]; // [rsp+18h] [rbp-68h] BYREF
  unsigned __int8 v15[24]; // [rsp+28h] [rbp-58h] BYREF
  unsigned __int64 v16; // [rsp+40h] [rbp-40h]

  v5 = a1[4].m128i_i64[0];
  v16 = __readfsqword(0x28u);
  v7 = *(unsigned __int64 **)(v5 + 1504);
  v8 = sub_12EA80((__int64)v7, a1, a3, a2, 0, a2, a4, a5, 0);
  if ( !(_BYTE)v8 && *(_DWORD *)(a2 + 4) != 1 )
  {
    sub_123A40((__int64)v14, (unsigned __int8 *)a2, v12, v13);
    sub_123A40((__int64)v15, (unsigned __int8 *)a2, v9, v10);
    if ( (unsigned __int8)sub_1274C0(v14, v7, (unsigned int)(*(_DWORD *)(a2 + 4) / 2), 0, a4)
      && (unsigned __int8)sub_1274C0(v15, v7, (unsigned int)(*(_DWORD *)(a2 + 4) / 2), 0, a4)
      && (unsigned __int8)sub_1B8210(a1, (__int64)v14, a3) )
    {
      v8 = sub_1B8210(a1, (__int64)v15, a3);
    }
    sub_11CDA0((__int64)v15);
    sub_11CDA0((__int64)v14);
  }
  return v8;
}

