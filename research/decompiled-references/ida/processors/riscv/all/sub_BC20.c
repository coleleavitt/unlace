__int64 __fastcall sub_BC20(__int64 a1, __int64 a2, unsigned __int16 a3, __int64 a4)
{
  __int16 v4; // ax
  __int64 v5; // rdx
  char v6; // cl
  __int64 v7; // rax
  __int64 result; // rax
  __int16 v9; // ax

  *(_BYTE *)(a2 + 1) = 7;
  v4 = *(_WORD *)(a4 + 24);
  if ( v4 == 3 )
  {
    v9 = ((a3 >> 7) & 0x10 | (a3 >> 2) & 0xE)
       + ((a3 >> 1) & 0x800)
       + ((4 * a3) & 0x400)
       + ((a3 >> 1) & 0x300)
       + ((2 * (_BYTE)a3) & 0x80)
       + ((a3 >> 1) & 0x40)
       + ((8 * (_BYTE)a3) & 0x20);
    v5 = *(_QWORD *)(a4 + 16);
    v6 = 52;
    v7 = v9 & 0x3FFE;
    goto LABEL_4;
  }
  if ( (unsigned __int16)(v4 - 5) <= 1u )
  {
    LODWORD(v7) = ((a3 >> 4) & 0x100)
                + ((8 * (_BYTE)a3) & 0x20 | (2 * (_BYTE)a3) & 0xC0)
                + ((a3 >> 2) & 6 | (a3 >> 7) & 0x18);
    v5 = *(_QWORD *)(a4 + 16);
    v6 = 55;
    v7 = (int)v7;
LABEL_4:
    result = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (v5 + (v7 << v6 >> v6));
    *(_QWORD *)(a2 + 16) = result;
    return result;
  }
  sub_B890(a1, a2);
  return sub_BD30();
}

