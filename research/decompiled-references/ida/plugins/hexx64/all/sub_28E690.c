__int64 __fastcall sub_28E690(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5)
{
  __int64 v6; // rdx
  __int64 v7; // r8

  if ( *(_DWORD *)(a2 + 12) != -1 && (unsigned __int8)sub_28B690((_QWORD *)a1, a2, *(double *)a5.m128_u64) )
    ++*(_DWORD *)(a1 + 84);
  while ( 2 )
  {
    switch ( *(_DWORD *)(a2 + 8) )
    {
      case 'F':
        if ( (unsigned __int8)sub_28BA30(a1, a2) )
          ++*(_DWORD *)(a1 + 84);
        return (unsigned __int8)sub_28B4E0((_QWORD *)a1, a2, *(double *)a5.m128_u64);
      case 'G':
        *(_DWORD *)(a1 + 80) += sub_2892A0(a1, a2, *(double *)a5.m128_u64);
        return 0;
      case 'H':
        if ( !(unsigned __int8)sub_2899E0(a1, a2, *(double *)a5.m128_u64)
          && !(unsigned __int8)sub_28AEA0((_QWORD *)a1, a2, *(double *)a5.m128_u64)
          && !(unsigned __int8)sub_28A500((_QWORD *)a1, a2, *(double *)a5.m128_u64)
          && !(unsigned __int8)sub_289B20(a1, a2, a3, a4, v7, a5) )
        {
          if ( (unsigned __int8)sub_28A070((_QWORD *)a1, a2, *(double *)a5.m128_u64) )
            ++*(_DWORD *)(a1 + 80);
          if ( (unsigned __int8)sub_28DED0(a1, a2, *(double *)a5.m128_u64) )
            ++*(_DWORD *)(a1 + 80);
          if ( !(unsigned __int8)sub_28BC80((_QWORD *)a1, a2, *(double *)a5.m128_u64)
            && !(unsigned __int8)sub_28C4D0(a1, a2) )
          {
            return 0;
          }
        }
        goto LABEL_14;
      case 'I':
        if ( (unsigned __int8)sub_288C80(a1, (__int64 *)a2, a3, a4, *(double *)a5.m128_u64) )
          ++*(_DWORD *)(a1 + 80);
        if ( sub_28E260((_QWORD *)a1, a2, (__m128i)a5) )
          ++*(_DWORD *)(a1 + 80);
        if ( (unsigned __int8)sub_288CF0((_QWORD *)a1, a2, *(double *)a5.m128_u64) )
          ++*(_DWORD *)(a1 + 80);
        if ( (unsigned __int8)sub_286860(a1, (__int64 *)a2, *(double *)a5.m128_u64) )
          ++*(_DWORD *)(a1 + 80);
        if ( (unsigned __int8)sub_298460((_QWORD *)a1, a2) )
        {
          ++*(_DWORD *)(a1 + 84);
          continue;
        }
        if ( (unsigned __int8)sub_286CD0((_QWORD *)a1, a2, *(double *)a5.m128_u64) )
          ++*(_DWORD *)(a1 + 80);
        if ( (unsigned __int8)sub_2874A0(a1, (__int64 *)a2)
          || (unsigned __int8)sub_287A90((_QWORD *)a1, a2, *(double *)a5.m128_u64)
          || (unsigned __int8)sub_289FC0((_QWORD *)a1, a2, *(double *)a5.m128_u64) )
        {
LABEL_14:
          ++*(_DWORD *)(a1 + 80);
          continue;
        }
        if ( (unsigned __int8)sub_2869D0((_QWORD *)a1, (__int64 *)a2, *(double *)a5.m128_u64) )
          ++*(_DWORD *)(a1 + 80);
        if ( (unsigned __int8)sub_289020((_QWORD *)a1, a2, *(double *)a5.m128_u64) )
          ++*(_DWORD *)(a1 + 80);
        if ( (unsigned __int8)sub_286F30(a1, a2, *(double *)a5.m128_u64) )
          ++*(_DWORD *)(a1 + 80);
        if ( (unsigned __int8)sub_289100((_QWORD *)a1, a2, *(double *)a5.m128_u64) )
LABEL_42:
          ++*(_DWORD *)(a1 + 80);
        return 0;
      case 'J':
        if ( (unsigned __int8)sub_2979B0(a1, a2) )
          ++*(_DWORD *)(a1 + 80);
        if ( (unsigned __int8)sub_297750(a1, a2) )
          ++*(_DWORD *)(a1 + 80);
        if ( (unsigned __int8)sub_297BD0(a1, a2) )
          goto LABEL_42;
        return 0;
      case 'K':
        if ( (unsigned __int8)sub_2979B0(a1, a2) )
          ++*(_DWORD *)(a1 + 80);
        if ( (unsigned __int8)sub_297750(a1, a2) )
          ++*(_DWORD *)(a1 + 80);
        if ( (unsigned __int8)sub_297360(a1, (__int64 *)a2, v6) )
          ++*(_DWORD *)(a1 + 80);
        if ( (unsigned __int8)sub_2975B0(a1, a2) )
          ++*(_DWORD *)(a1 + 84);
        if ( (unsigned __int8)sub_297BD0(a1, a2) )
          ++*(_DWORD *)(a1 + 80);
        if ( (unsigned __int8)sub_296E50((_QWORD *)a1, a2) )
          goto LABEL_4;
        return 0;
      case 'L':
        if ( (unsigned __int8)sub_297750(a1, a2) )
          ++*(_DWORD *)(a1 + 80);
        if ( (unsigned __int8)sub_297F70(a1, a2) )
          ++*(_DWORD *)(a1 + 80);
        if ( (unsigned __int8)sub_298120(a1, a2) )
          ++*(_DWORD *)(a1 + 80);
        if ( (unsigned __int8)sub_298170(a1, a2) )
          ++*(_DWORD *)(a1 + 80);
        if ( (unsigned __int8)sub_2981D0(a1, a2) )
          ++*(_DWORD *)(a1 + 80);
        if ( (unsigned __int8)sub_298350(a1, a2) )
          ++*(_DWORD *)(a1 + 80);
        if ( (unsigned __int8)sub_298940((_QWORD *)a1, a2) )
          goto LABEL_4;
        return 0;
      case 'P':
        if ( (unsigned __int8)sub_28BA30(a1, a2) )
LABEL_4:
          ++*(_DWORD *)(a1 + 84);
        return 0;
      default:
        return 0;
    }
  }
}

