__int64 __fastcall sub_3F41F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a3 + 5) == 10 )
    return *(unsigned int *)(*(_QWORD *)(a1 + 832) + 80LL);
  switch ( *(_BYTE *)(a3 + 1) )
  {
    case 2:
    case 7:
      result = *(unsigned int *)(*(_QWORD *)(a1 + 832) + 84LL);
      break;
    case 5:
      return *(unsigned int *)(*(_QWORD *)(a1 + 832) + 80LL);
    case 0xB:
      result = 4;
      break;
    default:
      result = get_dtype_size();
      break;
  }
  return result;
}

