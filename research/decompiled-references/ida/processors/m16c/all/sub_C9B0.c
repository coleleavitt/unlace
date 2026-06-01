__int64 __fastcall sub_C9B0(__int64 a1, unsigned int a2, unsigned __int8 a3)
{
  __int64 result; // rax

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 4344) + 4LL) == 7 )
    a3 = 1;
  switch ( a2 )
  {
    case 'T':
      result = LODWORD(qword_1AED8[a3]);
      break;
    case 'U':
      result = LODWORD(qword_1AEC8[a3]);
      break;
    case 'V':
      result = LODWORD(qword_1AEB8[a3]);
      break;
    case 'W':
      result = LODWORD(qword_1AEA8[a3]);
      break;
    case 'X':
      result = LODWORD(qword_1AE98[a3]);
      break;
    case 'Y':
      result = LODWORD(qword_1AE88[a3]);
      break;
    case 'Z':
      result = LODWORD(qword_1AE78[a3]);
      break;
    case '[':
      result = LODWORD(qword_1AE68[a3]);
      break;
    case '\\':
      result = LODWORD(qword_1AE58[a3]);
      break;
    case ']':
      result = LODWORD(qword_1AE48[a3]);
      break;
    case '^':
      result = LODWORD(qword_1AE38[a3]);
      break;
    case '_':
      result = LODWORD(qword_1AE28[a3]);
      break;
    default:
      result = a2;
      break;
  }
  return result;
}

