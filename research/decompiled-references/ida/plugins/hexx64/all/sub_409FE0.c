__int64 __fastcall sub_409FE0(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 *a6,
        double a7)
{
  unsigned __int64 v10; // r14
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  char v16; // al
  int v17; // eax
  int v18; // eax
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rbx
  int v22; // ecx
  int v23; // eax
  __int64 v24; // rsi
  __int64 v25; // rbp
  __int64 v26; // rdx
  __int64 v27; // rcx
  _QWORD *v28; // rax
  int v29; // eax
  __int64 v30; // rbp
  int v31; // eax
  __int64 v32; // [rsp+8h] [rbp-60h] BYREF
  char v33[24]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v34; // [rsp+28h] [rbp-40h]

  v10 = *(_QWORD *)(a4 + 24);
  v34 = __readfsqword(0x28u);
  sub_330F80(a3, v10);
  v12 = getseg();
  if ( !v12 )
    return 0;
  v13 = (unsigned int)*(unsigned __int8 *)(v12 + 43) + 4;
  v14 = (unsigned int)(1 << (*(_BYTE *)(v12 + 43) + 4));
  if ( *((_DWORD *)a6 + 1) != (int)v14 / 8 )
    return 0;
  if ( a5 )
  {
    v16 = *(_BYTE *)a5;
    if ( (unsigned __int8)(*(_BYTE *)a5 - 1) <= 1u )
    {
      v32 = 0;
      v14 = *a6;
      switch ( *a6 )
      {
        case 1u:
          if ( v16 != 1 )
            return 0;
          v23 = *(_DWORD *)(a5 + 8);
          if ( (*(_DWORD *)(a1 + 84) != 8 || v23 == *(_DWORD *)(a1 + 484) || v23 == *(_DWORD *)(a1 + 488))
            && v23 != *(_DWORD *)(a1 + 56) )
          {
            return 0;
          }
          v24 = a1;
          if ( !(unsigned __int8)sub_3393B0((unsigned __int64 *)&v32, a1, a3, v10, *((_DWORD *)a6 + 2), a7) )
            return 0;
          goto LABEL_31;
        case 2u:
          if ( *(_BYTE *)a5 != 2 )
          {
            v31 = sub_409F30((unsigned int *)a1, a5);
            if ( v31 == -1 || (*(_DWORD *)(a1 + 84) != 8 || (unsigned int)(v31 - 33) <= 1) && get_sreg() == -1 )
              return 0;
          }
          get_group_selector();
          v19 = sub_32ABC0(*(_QWORD *)(*((_QWORD *)a6 + 1) + 16LL), *((_DWORD *)a6 + 1), 0, a7);
          v20 = v19 + 16 * sel2para();
          v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 16LL);
          if ( v20 != v21 )
          {
            v21 &= v20;
            if ( v20 == -1 )
              v21 = -1;
          }
          sub_11CDA0(a2);
          *(_BYTE *)a2 = 6;
          v22 = 8 * *(_DWORD *)(a1 + 84);
          if ( (unsigned __int64)v22 <= 0x3F )
            v21 &= ~(-1LL << v22);
          *(_QWORD *)(a2 + 8) = v21;
          return 1;
        case 4u:
          if ( v16 != 1 )
            return 0;
          v29 = *(_DWORD *)(a5 + 8);
          if ( (*(_DWORD *)(a1 + 84) != 8 || v29 == *(_DWORD *)(a1 + 484) || v29 == *(_DWORD *)(a1 + 488))
            && v29 != *(_DWORD *)(a1 + 56) )
          {
            return 0;
          }
          v30 = *((_QWORD *)a6 + 1);
          v24 = a1;
          if ( !(unsigned __int8)sub_339470(&v32, a1, a3, v10, (int *)v30, a7)
            || *(_DWORD *)v30 == 13 && (*(_BYTE *)(v30 + 32) != 1 || *(_DWORD *)(a1 + 400) != *(_DWORD *)(v30 + 40)) )
          {
            return 0;
          }
LABEL_31:
          v25 = v32;
          if ( v32 < 0 )
            return 0;
          sub_11CDA0(a2);
          *(_BYTE *)a2 = 5;
          v28 = (_QWORD *)j__qalloc_or_throw(16, v24, v26, v27);
          *v28 = a3;
          v28[1] = v25;
          *(_QWORD *)(a2 + 8) = v28;
          break;
        case 6u:
          goto LABEL_7;
        case 0xAu:
          if ( v16 == 1 )
          {
            v18 = *(_DWORD *)(a5 + 8);
            if ( *(_DWORD *)(a1 + 484) == v18 || *(_DWORD *)(a1 + 488) == v18 )
              return 0;
          }
          goto LABEL_15;
        default:
          return 0;
      }
      return 1;
    }
    return 0;
  }
  v32 = 0;
  if ( *a6 == 6 )
  {
LABEL_7:
    v17 = *(_DWORD *)(a3[187] + 152LL);
    if ( v17 != 11 && v17 != 4 || (a6[1] & 1) != 0 || (unsigned __int8)segtype() != 1 )
      return 0;
    sub_125180((unsigned __int8 *)a2, a6);
    *(_BYTE *)(a2 + 1) |= 1u;
  }
  else
  {
    if ( *a6 != 10 )
      return 0;
LABEL_15:
    sub_123A40((__int64)v33, *((unsigned __int8 **)a6 + 1), v14, v13);
    sub_11CA10((char *)a2, v33);
    sub_11CDA0((__int64)v33);
  }
  return 1;
}

