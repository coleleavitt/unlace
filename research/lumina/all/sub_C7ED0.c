__int64 __fastcall sub_C7ED0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 result; // rax

  if ( !*(_WORD *)(a1 + 70) )
  {
    *(_BYTE *)(a1 + 1) |= 2u;
    v2 = *(_QWORD *)(a1 + 136);
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(v2 + 128))(
             v2,
             *(_QWORD *)(v2 + 80)
           + (unsigned __int16)(*(_WORD *)(v2 + 26)
                              & __ROL2__(*(_WORD *)(*(_QWORD *)(v2 + 96) + 2 * *(unsigned __int16 *)(a1 + 86)), 8)));
  }
  return result;
}
