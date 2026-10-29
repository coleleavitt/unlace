__int64 __fastcall sub_7B70(__int64 a1, __int64 a2, unsigned __int8 *a3, unsigned __int8 a4, double a5)
{
  __int64 v5; // rbp
  unsigned __int8 v6; // r8
  __int64 v9; // rdx
  int v10; // eax
  int v11; // ecx
  unsigned __int8 v12; // al
  __int16 v13; // ax
  unsigned int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  char *v18; // rdx
  __int64 v19; // r13
  unsigned int v20; // r12d
  unsigned __int8 v21; // al
  unsigned __int16 v22; // cx
  unsigned __int16 v23; // dx
  unsigned int v24; // eax
  __int64 v25; // r12
  char v26; // r13
  __int64 v27; // rax
  char v28; // [rsp+7h] [rbp-31h] BYREF
  unsigned __int64 v29; // [rsp+8h] [rbp-30h]

  v5 = a2;
  v6 = a3[1];
  v29 = __readfsqword(0x28u);
  switch ( v6 )
  {
    case 0u:
      return v29 - __readfsqword(0x28u);
    case 2u:
      v18 = "Invalid local variable number";
      if ( a3[32] )
        return sub_7B10(a1, *(_QWORD *)(a2 + 16), v18);
      v19 = *(_QWORD *)(a1 + 33165) + *((_QWORD *)a3 + 2);
      v20 = a4 + 2;
      insn_add_dref(a2, v19, (unsigned int)(char)a3[2], v20);
      v21 = a3[5];
      if ( v21 != 7 && v21 != 4 || (unsigned __int64)(get_item_end(v19) - v19) > 1 )
        return v29 - __readfsqword(0x28u);
      v16 = (unsigned int)(char)a3[2];
      v15 = v19 + 1;
      v17 = v20;
      return insn_add_dref(v5, v15, v16, v17);
    case 5u:
      if ( (char)a3[32] > 1 )
        return v29 - __readfsqword(0x28u);
      return set_immd(*(_QWORD *)(a2 + 16));
    case 7u:
      if ( !a3[32] )
        return insn_add_cref(
                 a2,
                 *(_QWORD *)(a1 + 33157) + *((_QWORD *)a3 + 2),
                 (unsigned int)(char)a3[2],
                 (*(_DWORD *)(a1 + 192) & 2) == 0 ? 19 : 17);
      v18 = "Invalid jump address";
      return sub_7B10(a1, *(_QWORD *)(a2 + 16), v18);
    case 8u:
      v12 = a3[32];
      if ( !v12 )
      {
        if ( !*((_WORD *)a3 + 12) )
          return v29 - __readfsqword(0x28u);
        v13 = *((_WORD *)a3 + 13);
        v28 = -1;
        if ( (_BYTE)v13 == 9 )
        {
          v28 = 1;
        }
        else
        {
          if ( (unsigned __int8)v13 <= 9u )
          {
            if ( (_BYTE)v13 == 7 )
            {
              v14 = *(_DWORD *)(a2 + 28);
              if ( v14 )
              {
                if ( v14 == 0xFFFF )
                  v15 = *(_QWORD *)(a1 + 33053);
                else
                  v15 = *(_QWORD *)(a1 + 33065) + v14;
                v16 = (unsigned int)(char)a3[2];
                v17 = 5;
                return insn_add_dref(v5, v15, v16, v17);
              }
            }
            return v29 - __readfsqword(0x28u);
          }
          if ( (unsigned __int8)(v13 - 10) > 1u )
            return v29 - __readfsqword(0x28u);
        }
        v22 = *((_WORD *)a3 + 9);
        v23 = *((_WORD *)a3 + 5);
        if ( !(v23 | (unsigned __int16)(v22 | *((_WORD *)a3 + 4))) )
          return v29 - __readfsqword(0x28u);
        if ( v23 == *(_WORD *)(a1 + 33023) )
        {
          v27 = sub_7980(a1, v22, *((_WORD *)a3 + 8), &v28);
          v26 = v28;
          v25 = v27;
          if ( v27 == -1 )
            return v29 - __readfsqword(0x28u);
        }
        else
        {
          v24 = *(_DWORD *)(a2 + 28);
          if ( !v24 )
            return v29 - __readfsqword(0x28u);
          if ( v24 == 0xFFFF )
            v25 = *(_QWORD *)(a1 + 33053);
          else
            v25 = *(_QWORD *)(a1 + 33065) + v24;
          v26 = v28;
          if ( v28 < 0 )
          {
            insn_add_cref(a2, v25, (unsigned int)(char)a3[2], 16);
            return auto_cancel(v25, v25 + 1);
          }
        }
        v16 = (unsigned int)(char)a3[2];
        if ( v26 > 0 )
        {
          v15 = v25;
          v17 = 3 - (unsigned int)(((*(_WORD *)(v5 + 24) - 179) & 0xFFFD) == 0);
          return insn_add_dref(v5, v15, v16, v17);
        }
        insn_add_cref(a2, v25, v16, 16);
        if ( v26 )
          return v29 - __readfsqword(0x28u);
        return auto_cancel(v25, v25 + 1);
      }
      v18 = "Invalid index in constant pool";
      if ( v12 == 1 )
        v18 = "Invalid string in constant pool";
      return sub_7B10(a1, *(_QWORD *)(a2 + 16), v18);
    case 9u:
      if ( !a3[32] )
        return v29 - __readfsqword(0x28u);
      v18 = "Invalid array type";
      return sub_7B10(a1, *(_QWORD *)(a2 + 16), v18);
    default:
      v9 = *(_QWORD *)(a1 + 16);
      v10 = *(unsigned __int16 *)(a2 + 24);
      LODWORD(a2) = 0;
      v11 = *(_DWORD *)(v9 + 104);
      if ( v10 >= v11 && v10 < *(_DWORD *)(v9 + 108) )
        a2 = *(_QWORD *)(*(_QWORD *)(v9 + 112) + 16LL * (v10 - v11));
      return sub_6E90((__int64)"%a: %s,%d: bad optype %d", a5, *(const char **)(v5 + 16), a2, *a3);
  }
}

