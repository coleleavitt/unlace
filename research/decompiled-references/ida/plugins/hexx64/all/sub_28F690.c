__int64 __fastcall sub_28F690(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  unsigned int v5; // ebp
  __int64 v8; // r14
  __int64 v9; // r13
  char tinfo_property; // al
  __int64 v11; // rax
  int v12; // ecx
  int v13; // edi
  int v14; // ecx
  __int64 v15; // rsi
  __int64 v16; // rax
  int v17; // [rsp+Ch] [rbp-6Ch]
  __int64 v18; // [rsp+10h] [rbp-68h] BYREF
  __int128 v19; // [rsp+18h] [rbp-60h]
  int v20; // [rsp+28h] [rbp-50h]
  int v21; // [rsp+2Ch] [rbp-4Ch]
  int v22; // [rsp+30h] [rbp-48h]
  unsigned __int64 v23; // [rsp+38h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 8) == 21 )
  {
    v3 = a1[3];
    if ( v3 )
    {
      if ( sub_2845A0(*(_QWORD *)(a1[2] + 8 * v3 - 8), a2, a3) )
      {
        v8 = *(_QWORD *)(a2 + 24);
        v9 = *(_QWORD *)(a2 + 32);
        if ( *(_DWORD *)(v8 + 8) == 61 )
        {
LABEL_9:
          v19 = 0;
          v5 = sub_28EA50((__int64)a1, v9, (__int64)&v18, a2, 0.0);
          if ( !(_BYTE)v5 )
            goto LABEL_23;
          tinfo_property = get_tinfo_property();
          if ( (tinfo_property & 0x3E) == 0 || (tinfo_property & 0xFu) > 8 || (unsigned __int64)v20 > 8 )
            goto LABEL_23;
          if ( *(_BYTE *)(a1[9] + 145LL) )
          {
            if ( v20 == v22 * (v21 + 1) )
              goto LABEL_23;
          }
          else if ( !v21 )
          {
            goto LABEL_23;
          }
          v17 = v22;
          v11 = sub_255A30(*(__int64 **)(v8 + 24));
          v12 = 8 * v17;
          if ( (unsigned __int64)(8 * v17) > 0x3F || (v11 & (-1LL << v12)) == 0 )
          {
            v13 = v21;
            if ( *(_BYTE *)(a1[9] + 145LL) )
              v13 = v20 / v17 - v21 - 1;
            v14 = v13 * v12;
            v15 = v11 << v14;
            v16 = 0;
            if ( (unsigned __int64)v14 < 0x40 )
              v16 = v15;
            sub_240A20(v8, *(_QWORD *)(a1[8] + 216LL), a1[8], v16, v20, 2, 0.0);
            sub_28F010((__int64)a1, v9, &v18);
            sub_2441C0(a2, *(_QWORD *)(a1[9] + 112LL), 0, 0.0);
            goto LABEL_24;
          }
LABEL_23:
          v5 = 0;
LABEL_24:
          clear_tinfo_t();
          clear_tinfo_t();
          return v5;
        }
        if ( *(_DWORD *)(v9 + 8) == 61 )
        {
          v9 = *(_QWORD *)(a2 + 24);
          v8 = *(_QWORD *)(a2 + 32);
          goto LABEL_9;
        }
      }
    }
  }
  return 0;
}

