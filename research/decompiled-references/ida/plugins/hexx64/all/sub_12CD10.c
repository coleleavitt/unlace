__int64 __fastcall sub_12CD10(__int16 *a1, unsigned __int64 *a2, char a3, __m128i a4)
{
  int v5; // ebp
  __int64 v6; // rsi
  __int64 v8; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  int v12; // esi
  int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int16 v17; // si
  __int16 v18; // cx
  int v19; // edx
  __int64 v20; // rax
  __int64 v21; // [rsp+0h] [rbp-48h] BYREF
  __int64 v22; // [rsp+8h] [rbp-40h]
  unsigned __int64 v23; // [rsp+18h] [rbp-30h]

  v5 = *((_DWORD *)a1 + 1);
  v6 = a2[12];
  v23 = __readfsqword(0x28u);
  if ( !a3 )
    v5 = -v5;
  if ( *(_BYTE *)(v6 + 145) && sub_11BB90((unsigned __int8 *)a1, v6, 0, *(double *)a4.m128i_i64) )
    v5 = -v5;
  switch ( *(_BYTE *)a1 )
  {
    case 0:
    case 7:
      goto LABEL_9;
    case 1:
      v12 = *((_DWORD *)a1 + 2);
      if ( v5 <= 0 )
      {
        v12 += v5;
        if ( v12 <= 7 )
        {
          if ( v5 )
            return 0;
        }
      }
      v13 = 2 * *((_DWORD *)a1 + 1);
      if ( v13 <= 0xFFFF - v12
        && v13 + v12 - 1 >= *((_DWORD *)a2 + 17) == *((_DWORD *)a2 + 17) <= v12
        && (*(unsigned __int8 (__fastcall **)(unsigned __int64 *))(*a2 + 88))(a2) )
      {
        *((_DWORD *)a1 + 2) += v5;
        goto LABEL_9;
      }
      return 0;
    case 4:
      if ( !(unsigned __int8)sub_12CBD0(*((_QWORD *)a1 + 1), a2, a3, a4) )
        return 0;
      v16 = *((_QWORD *)a1 + 1);
      if ( *(_DWORD *)v16 == 4 && a1 )
      {
        v22 = 0;
        sub_123A40((__int64)&v21, (unsigned __int8 *)(v16 + 32), v14, v15);
        v17 = *a1;
        v18 = a1[1];
        v19 = *((_DWORD *)a1 + 1);
        *(_QWORD *)a1 = v21;
        v20 = *((_QWORD *)a1 + 1);
        LOWORD(v21) = v17;
        *((_QWORD *)a1 + 1) = v22;
        WORD1(v21) = v18;
        HIDWORD(v21) = v19;
        v22 = v20;
        sub_11CDA0((__int64)&v21);
      }
      goto LABEL_9;
    case 5:
      v8 = *((_QWORD *)a1 + 1);
      if ( v5 < 0 && *(_QWORD *)(v8 + 8) < -v5 )
        return 0;
      *(_QWORD *)(v8 + 8) += v5;
      goto LABEL_9;
    case 6:
      v10 = *((_QWORD *)a1 + 1);
      if ( v5 < 0 )
      {
        if ( v10 >= -v5 )
        {
          v11 = *(_QWORD *)(*(_QWORD *)(a2[12] + 24) + 16LL) & (v10 + v5);
          goto LABEL_15;
        }
        return 0;
      }
      v11 = *(_QWORD *)(*(_QWORD *)(a2[12] + 24) + 16LL) & (v10 + v5);
      if ( v5 && v11 < v10 )
        return 0;
LABEL_15:
      *((_QWORD *)a1 + 1) = v11;
LABEL_9:
      a1[1] = 0;
      return 1;
    default:
      return 0;
  }
}

