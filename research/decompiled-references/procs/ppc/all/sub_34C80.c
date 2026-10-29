bool __fastcall sub_34C80(_BYTE *a1, __int16 a2)
{
  int dtype_size; // ebp
  bool result; // al
  __int64 v4; // rcx
  unsigned __int16 v5; // ax
  char *v6; // rax
  int v7; // [rsp+8h] [rbp-190h] BYREF
  int v8; // [rsp+Ch] [rbp-18Ch] BYREF
  __int128 v9; // [rsp+10h] [rbp-188h] BYREF
  __int64 v10; // [rsp+20h] [rbp-178h]
  __int64 v11; // [rsp+28h] [rbp-170h]
  __int64 v12; // [rsp+30h] [rbp-168h]
  char v13; // [rsp+38h] [rbp-160h] BYREF
  _QWORD v14[4]; // [rsp+178h] [rbp-20h] BYREF

  v14[0] = __readfsqword(0x28u);
  dtype_size = get_dtype_size((unsigned __int8)((HIBYTE(a2) & 0x7F) - 1));
  result = 1;
  if ( dtype_size != 1 )
  {
    if ( a1[24] == 4 )
    {
      v4 = *(_QWORD *)a1;
      v5 = *(_WORD *)(*(_QWORD *)a1 + 16LL);
      if ( v5 != 1191 )
      {
        if ( v5 > 0x4A7u )
        {
          if ( v5 != 1195 )
            return 0;
        }
        else if ( (v5 & 0xFFFB) != 0x158 )
        {
          return 0;
        }
      }
      v10 = -1;
      v6 = &v13;
      v11 = 0;
      v12 = 0;
      v9 = -1;
      do
      {
        *(_WORD *)v6 = 0;
        v6 += 40;
        *((_WORD *)v6 - 19) = 0;
        *((_WORD *)v6 - 18) = 0;
        *((_DWORD *)v6 - 2) = 0;
        *((_WORD *)v6 - 17) = 0;
        *((_OWORD *)v6 - 2) = 0;
        *((_QWORD *)v6 - 2) = 0;
      }
      while ( v14 != (_QWORD *)v6 );
      if ( (int)decode_insn(&v9, *(_QWORD *)(v4 + 8), v14, 0.0) > 0
        && (unsigned __int8)sub_34BB0(&v7, &v8, (__int64)&v9) )
      {
        return 1 << v8 == dtype_size;
      }
    }
    return 0;
  }
  return result;
}
