__int64 __fastcall sub_7FA0(__int64 a1, __int64 a2, double a3)
{
  int v3; // ecx
  __int64 v5; // rdx
  int v6; // eax
  int v8; // esi
  int v9; // eax
  char v10; // al
  __int64 v11; // rbx
  __int64 v12; // r15
  __int64 i; // rbp
  int v14; // eax
  unsigned __int64 v16; // r13
  __int64 v17; // r13
  unsigned __int64 v18; // rax
  __int64 v19; // rdi
  unsigned int v20; // ebx
  __int64 v21; // rbp
  _BYTE v22[40]; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-40h]

  v3 = 0;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(unsigned __int16 *)(a2 + 24);
  v23 = __readfsqword(0x28u);
  v8 = *(_DWORD *)(v5 + 104);
  if ( v8 <= v6 && v6 < *(_DWORD *)(v5 + 108) )
    v3 = *(_DWORD *)(*(_QWORD *)(v5 + 112) + 16LL * (v6 - v8) + 8);
  *(_DWORD *)(a1 + 192) = v3;
  if ( *(char *)(a2 + 32) > 1 )
    sub_7B10(a1, *(_QWORD *)(a2 + 16), "Limited usage instruction");
  if ( *(_WORD *)(a2 + 24) > 0xCDu )
    sub_7B10(a1, *(_QWORD *)(a2 + 16), "Undocumented instruction");
  if ( !*(_BYTE *)(a2 + 41) && *(_BYTE *)(a2 + 72) )
  {
    if ( *(char *)(a2 + 72) < 0 )
    {
      sub_7B10(a1, *(_QWORD *)(a2 + 16), "Invalid local variable number");
    }
    else
    {
      v20 = 3;
      if ( *(_WORD *)(a2 + 24) > 0x3Au )
        v20 = 2;
      insn_add_dref(a2, *(_QWORD *)(a2 + 56), 0, v20);
      if ( (*(_BYTE *)(a2 + 72) & 2) != 0 )
      {
        v21 = *(_QWORD *)(a2 + 56);
        if ( (unsigned __int64)(get_item_end(v21) - v21) <= 1 )
          insn_add_dref(a2, *(_QWORD *)(a2 + 56) + 1LL, 0, v20);
      }
    }
  }
  v9 = *(_DWORD *)(a1 + 192);
  if ( (v9 & 0x100) != 0 )
  {
    sub_7B70(a1, a2, (unsigned __int8 *)(a2 + 40), 1u, a3);
    v9 = *(_DWORD *)(a1 + 192);
  }
  if ( (v9 & 0x200) != 0 )
  {
    sub_7B70(a1, a2, (unsigned __int8 *)(a2 + 80), 1u, a3);
    v9 = *(_DWORD *)(a1 + 192);
  }
  if ( (v9 & 0x400) != 0 )
  {
    sub_7B70(a1, a2, (unsigned __int8 *)(a2 + 120), 1u, a3);
    v9 = *(_DWORD *)(a1 + 192);
  }
  if ( (v9 & 4) != 0 )
    sub_7B70(a1, a2, (unsigned __int8 *)(a2 + 40), 0, a3);
  v10 = *(_BYTE *)(a2 + 73);
  if ( v10 )
  {
    if ( v10 < 0 )
    {
      sub_7B10(a1, *(_QWORD *)(a2 + 16), "Invalid local variable number");
      if ( (*(_BYTE *)(a2 + 73) & 0x40) == 0 )
      {
LABEL_21:
        v11 = *(_QWORD *)(a2 + 128);
        v12 = *(_QWORD *)(a2 + 96);
        for ( i = *(_QWORD *)(a2 + 88) - 1LL; v11; --v11 )
        {
          if ( *(_WORD *)(a2 + 24) == 171 )
          {
            v19 = v12 + *(_QWORD *)(a1 + 33157);
            v12 += 4;
            i = (unsigned int)get_dword(v19);
          }
          else
          {
            ++i;
          }
          v17 = *(_QWORD *)(a2 + 8);
          v18 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL)
              & (v17 + (unsigned int)get_dword(v12 + *(_QWORD *)(a1 + 33157)));
          if ( v18 < *(unsigned int *)(a1 + 33153) )
          {
            v16 = *(_QWORD *)(a1 + 33157) + v18;
            add_cref(*(_QWORD *)(a2 + 16), v16, 19);
            if ( (get_flags_ex(v16, 4) & 0x800) == 0 )
            {
              qsnprintf(v22, 32, "case %llu", i);
              set_cmt(v16, v22, 0);
            }
          }
          v12 += 4;
        }
        goto LABEL_22;
      }
    }
    else if ( (v10 & 0x40) == 0 )
    {
      goto LABEL_21;
    }
    sub_7B10(a1, *(_QWORD *)(a2 + 16), "Nonzero filler (warning)");
    goto LABEL_21;
  }
LABEL_22:
  v14 = *(_DWORD *)(a1 + 192);
  if ( (v14 & 1) == 0 && ((v14 & 2) == 0 || (unsigned __int8)func_does_return(*(_QWORD *)(a2 + 16))) )
    add_cref(*(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26), 21);
  return 1;
}
