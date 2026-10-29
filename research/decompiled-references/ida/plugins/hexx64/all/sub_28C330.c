__int64 __fastcall sub_28C330(__int64 a1, __int64 a2, double a3)
{
  __int64 v5; // rdi

  while ( 2 )
  {
    switch ( *(_DWORD *)(a2 + 8) )
    {
      case 'F':
        return (unsigned __int8)sub_28B4E0((_QWORD *)a1, a2, a3);
      case 'H':
        if ( (unsigned __int8)sub_28BC80((_QWORD *)a1, a2, a3) )
          continue;
        return 0;
      case 'I':
        if ( (unsigned __int8)sub_298460((_QWORD *)a1, a2) )
          goto LABEL_9;
        if ( (unsigned __int8)sub_287A90((_QWORD *)a1, a2, a3) )
          continue;
        return (unsigned __int8)sub_2884E0((_QWORD *)a1, a2);
      case 'K':
        if ( (unsigned __int8)sub_2975B0(a1, a2) )
          goto LABEL_9;
        if ( (unsigned __int8)sub_297D60((_QWORD *)a1, a2) )
          continue;
        if ( (unsigned __int8)sub_296E50((_QWORD *)a1, a2) )
          goto LABEL_9;
        return 0;
      case 'P':
        if ( (unsigned __int8)sub_28BA30(a1, a2) )
          goto LABEL_9;
        if ( (unsigned __int8)sub_28C040((_QWORD *)a1, a2, a3) )
          continue;
        return 0;
      case 'Q':
        if ( (unsigned __int8)sub_283EA0(a1, a2, **(_DWORD **)(a2 + 24), a3) )
        {
          v5 = *(_QWORD *)(a2 + 24);
          if ( v5 )
            j__qfree(v5);
          *(_DWORD *)(a2 + 8) = 78;
          ++*(_DWORD *)(a1 + 84);
          continue;
        }
        if ( (unsigned __int8)sub_283FC0(a1, a2, a3) )
        {
LABEL_9:
          ++*(_DWORD *)(a1 + 84);
          continue;
        }
        if ( !(unsigned __int8)sub_28B740((_QWORD *)a1, a2) )
          return 0;
        ++*(_DWORD *)(a1 + 84);
        return 1;
      default:
        return 0;
    }
  }
}

